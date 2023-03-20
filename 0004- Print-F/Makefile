SRCS = ft_printf.c \
ft_print_char.c \
ft_print_hexadecimal.c \
ft_print_int.c \
ft_print_pointer.c \
ft_print_string.c \
ft_print_udecimal.c \
ft_util_functions.c \


OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re


