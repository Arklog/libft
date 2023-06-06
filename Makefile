SRC		:=	./src/ft_string/ft_strdup.c\
			./src/ft_string/ft_strcmp.c\
			./src/ft_string/ft_countc.c\
			./src/ft_string/ft_strcat.c\
			./src/ft_string/ft_memcpy.c\
			./src/ft_string/ft_memset.c\
			./src/ft_string/ft_strlen.c\
			./src/ft_string/rotate.c\
			./src/ft_string/ft_strchr.c\
			./src/ft_string/ft_memmove.c\
			./src/ft_stdlib/ft_atoi.c\
			./src/ft_stdlib/ft_strtol.c\
			./src/ft_lstaddback.c\
			./src/ft_split.c\
			./src/ft_lstaddfront.c\
			./src/ft_lstiteri.c\
			./src/ft_lstlast.c\
			./src/ft_lstsize.c\
			./src/ft_putstrfd.c\
			./src/ft_lstnew.c\
			./src/ft_math/ft_digitat.c\
			./src/ft_math/ft_powi.c\
			./src/ft_math/ft_absi.c\
			./src/ft_splitcs.c\
			./src/ft_ctype/ft_isalpha.c\
			./src/ft_ctype/ft_isdigit.c\
			./src/ft_toupper.c
OBJ     := ${SRC:.c=.o}

CC      := cc
CFLAGS  := -Wall -Werror -Wextra -I.

NAME    := libft.a

all:    ${NAME}
	

${NAME}: ${OBJ}
	@ar rcs $@ ${OBJ}

%.o:
	${CC} ${CFLAGS} -c -o $@ ${@:.o=.c}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: | fclean all