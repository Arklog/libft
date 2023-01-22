SRC := src/ft_memcpy.c \
		src/ft_memset.c \
		src/ft_isdigit.c \
		src/ft_isalpha.c \
		src/ft_strlen.c
OBJ := $(SRC:.c=.o)

NAME := libft

CC := gcc
CFLAGS := -Wall -Wextra -Werror
INC := -I.

install: all
	

all: ${NAME}

${NAME}: ${NAME}.h ${OBJ}
	ar -rsc ${NAME}.a ${OBJ}

%.o: %.c ${NAME}.h
	${CC} ${CFLAGS} ${INC} -c $< -o $@

fclean: clean
	rm -f ${NAME}.a

clean:
	rm -f ${OBJ}