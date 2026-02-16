#ifndef WEBSOCKET_H
#define WEBSOCKET_H

#include "type/pointer.h"
#include "type/type.h"
#include <netdb.h>
#include <openssl/err.h>
#include <openssl/ssl.h>
#include <unistd.h>

// INFO: Zero Copy Pattern/Principle
// INFO: RFC6455 - https://datatracker.ietf.org/doc/html/rfc6455

#define WEBSOCKET_FIN 0x80
#define WEBSOCKET_FIN_CONTINUE 0x00

#define WEBSOCKET_OPCODE_CONTINUATION 0x00
#define WEBSOCKET_OPCODE_TEXT 0x01
#define WEBSOCKET_OPCODE_BINARY 0x02
#define WEBSOCKET_OPCODE_CLOSE 0x08
#define WEBSOCKET_OPCODE_PING 0x09
#define WEBSOCKET_OPCODE_PONG 0x0A

#define WEBSOCKET_MASK_CLIENT 0x80
#define WEBSOCKET_MASK_SERVER 0x00

typedef struct websocket_client_s websocket_client_t;
typedef struct websocket_client_init_s websocket_client_init_t;

typedef struct websocket_server_s websocket_server_t;
typedef struct websocket_server_init_s websocket_server_init_t;

struct websocket_client_s {
  // Connection
  SSL* ssl;
  SSL_CTX* ssl_ctx;
  i32_t sock;
  char sec_key[24];

  // Frame Protocol
  ptr_t* frame; // Header 14 Bytes + Payload Size, size always x^2
  // for thread safe different frame for different type

  // Timestamp Record
  u64_t timestamp_on_binary;
  u64_t timestamp_on_close;
  u64_t timestamp_on_error;
  u64_t timestamp_on_open;
  u64_t timestamp_on_ping;
  u64_t timestamp_on_pong;
  u64_t timestamp_on_text;

  // INFO: Virtual Table
  void (*fn_on_binary)(websocket_client_t*, ptr_t);
  void (*fn_on_close)(websocket_client_t*);
  void (*fn_on_error)(websocket_client_t*);
  void (*fn_on_open)(websocket_client_t*);
  void (*fn_on_ping)(websocket_client_t*, ptr_t*);
  void (*fn_on_pong)(websocket_client_t*, ptr_t*);
  void (*fn_on_text)(websocket_client_t*, ptr_t*);
};

struct websocket_client_init_s {
  u32_t empty;
};

struct websocket_server_s {
  u32_t empty;
};

struct websocket_server_init_s {
  u32_t empty;
};

// Constructor
websocket_client_t* websocket_client_new(websocket_client_t** context);
websocket_client_t* websocket_client_new_init(websocket_client_t** context,
                                              websocket_client_init_t* init);

websocket_server_t* websocket_server_new(websocket_server_t** context);
websocket_server_t* websocket_server_new_init(websocket_server_t** context,
                                              websocket_server_init_t* init);

// Destructor
void websocket_client_delete(void* context);
void websocket_server_delete(void* context);

// Client Methods
websocket_client_t* websocket_client_run(websocket_client_t* context);

ptr_t* websocket_client_payload_ptr(websocket_client_t* context, u64_t size);

websocket_client_t*
websocket_client_send_binary(websocket_client_t* context, ptr_t* data);
websocket_client_t*
websocket_client_send_text(websocket_client_t* context, ptr_t* data);

// on_binary_bulk
// on_text_bulk

// websocket_client_stream_binary
// websocket_client_stream_text

// websocket_client_send_close
// websocket_client_send_ping
// websocket_client_send_pong

// Server Methods

#endif
