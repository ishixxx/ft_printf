NAME = libftprintf.a

SRCS = ft_print_hex.c ft_print_int.c ft_print_point.c ft_print_string.c ft_print_unsigned.c ft_printf.c ft_print_char.c

OBJS =	${SRCS:.c=.o}

HEADER = ft_printf.h

AR = ar
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	${AR} rcs ${NAME} $@ $^

clean:
	@make clean -C libft
	${RM} ${OBJS}

fclean: clean
	@make fclean -C libft
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re libft
