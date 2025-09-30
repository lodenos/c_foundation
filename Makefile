NAME = libcfoundation.a

CC = clang
CFLAGS = -Wall -Wextra -Werror \
  -Weverything -Wno-poison-system-directories -Wno-padded

SRC_DIR = ./src
OBJ_DIR = ./obj

INCLUDES = -I ./inc

SRCS = \
  complex/c32_to_c32x16.c \
  complex/c32_to_c32x2.c \
  complex/c32_to_c32x4.c \
  complex/c32_to_c32x8.c \
  complex/c32x16_to_c32.c \
  complex/c32x2_to_c32.c \
  complex/c32x4_to_c32.c \
  complex/c32x8_to_c32.c \
  complex/c64_to_c64x16.c \
  complex/c64_to_c64x2.c \
  complex/c64_to_c64x4.c \
  complex/c64_to_c64x8.c \
  complex/c64x16_to_c64.c \
  complex/c64x2_to_c64.c \
  complex/c64x4_to_c64.c \
  complex/c64x8_to_c64.c \
  \
  list/clist/clist_delete.c \
  list/clist/clist_index.c \
  list/clist/clist_new.c \
  list/clist/clist_new_init.c \
  list/clist/clist_push_head.c \
  list/clist/clist_push_tail.c \
  list/clist/clist_size.c \
  \
  list/dlist/dlist_delete.c \
  list/dlist/dlist_index.c \
  list/dlist/dlist_new.c \
  list/dlist/dlist_new_init.c \
  list/dlist/dlist_push_head.c \
  list/dlist/dlist_push_tail.c \
  list/dlist/dlist_size.c \
  \
  list/llist/llist_delete.c \
  list/llist/llist_index.c \
  list/llist/llist_new.c \
  list/llist/llist_new_init.c \
  list/llist/llist_push_head.c \
  list/llist/llist_push_tail.c \
  list/llist/llist_size.c \
  \
  queue/pqueue/pqueue_delete.c \
  queue/pqueue/pqueue_new.c \
  queue/pqueue/pqueue_new_init.c \
  \
  queue/queue/queue_delete.c \
  queue/queue/queue_new.c \
  queue/queue/queue_new_init.c \
  \
  string/string_append.c \
  string/string_compare.c \
  string/string_copy.c \
  string/string_count_substring.c \
  string/string_decorator.c \
  string/string_delete.c \
  string/string_duplicate.c \
  string/string_find.c \
  string/string_flush.c \
  string/string_from_f32.c \
  string/string_from_f64.c \
  string/string_from_i16.c \
  string/string_from_i32.c \
  string/string_from_i64.c \
  string/string_from_i8.c \
  string/string_from_u16.c \
  string/string_from_u32.c \
  string/string_from_u64.c \
  string/string_from_u8.c \
  string/string_is_type.c \
  string/string_new.c \
  string/string_new_init.c \
  string/string_reverse.c \
  string/string_start_with.c \
  string/string_stop_with.c \
  string/string_substring.c \
  string/string_to_f32.c \
  string/string_to_f64.c \
  string/string_to_i16.c \
  string/string_to_i32.c \
  string/string_to_i64.c \
  string/string_to_i8.c \
  string/string_to_lowercase.c \
  string/string_to_u16.c \
  string/string_to_u32.c \
  string/string_to_u64.c \
  string/string_to_u8.c \
  string/string_to_uppercase.c \
  \
  tree/btree/btree_delete.c \
  tree/btree/btree_find.c \
  tree/btree/btree_insert.c \
  tree/btree/btree_new.c \
  tree/btree/btree_new_init.c \
  tree/btree/btree_node_delete.c \
  tree/btree/btree_node_new.c \
  tree/btree/btree_node_new_init.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR)/,$(OBJS))
	ar rc $(NAME) $(addprefix $(OBJ_DIR)/,$(OBJS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
