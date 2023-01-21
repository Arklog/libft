SRC := src/ft_memcpy.c \
		src/ft_memset.c
OBJ := $(SRC:.c=.o)

NAME := libft

CC := gcc
CFLAGS := -Wall -Wextra -Werror
INC := -I.

all: ${NAME}

${NAME}: ${NAME}.h ${OBJ}
	ar -rsc ${NAME}.a ${OBJ}

%.o: %.c ${NAME}.h
	${CC} ${CFLAGS} ${INC} -c $< -o $@

fclean: clean
	rm -f ${NAME}.a

clean:
	rm -f ${OBJ}