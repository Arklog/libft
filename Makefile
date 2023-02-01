SRC := src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_isdigit.c \
		src/ft_isalpha.c \
		src/ft_toupper.c \
		src/ft_strlen.c
SRC := ${SRC:%.c=$(shell pwd)/%.o}
OBJ := $(SRC:.c=.o)

NAME := libft

CC := gcc
CFLAGS := -Wall -Wextra -Werror
INC := -I.

.NOTPARALLEL: prepare_a prepare_so
.PHONY: install all ${NAME} so fclean clean objs soobjs

all: | prepare_a ${NAME}

install: all

prepare_a:
	@+if [ -e ${NAME}.so ]; \
	then \
		make -C . fclean; \
		make -C . objs; \
	fi

${NAME}: | ${NAME}.h ${OBJ}
	ar -rsc ${NAME}.a ${OBJ}

objs: prepare_a ${OBJ}

soobjs: prepare_so ${OBJ}

%.o: %.c ${NAME}.h
	${CC} ${CFLAGS} ${INC} -c $< -o $@

fclean: clean
	rm -f ${NAME}.a ${NAME}.so

clean:
	rm -f ${OBJ}

so: | prepare_so ${OBJ}
	${CC} -shared -o ${NAME}.so ${OBJ}

prepare_so:
	$(eval CFLAGS += -nostartfiles -fPIC)
	@+if [ -e ${NAME}.a ]; \
	then \
		make -C . fclean; \
		make -C . soobjs; \
	fi