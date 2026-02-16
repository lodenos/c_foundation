NAME = libcfoundation.a

CC = clang
CFLAGS = -Wall -Wextra -Werror -Weverything -std=c23 \
	-Wno-poison-system-directories -Wno-padded -Wno-unsafe-buffer-usage

SRC_DIR = ./src
OBJ_DIR = ./obj

INCLUDES = -I ./inc

SRCS = \
	codec/base64_decode.c \
	codec/base64_encode.c

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
