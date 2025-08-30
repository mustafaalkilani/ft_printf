

NAME	= libftprintf.a

SRC = ft_printf.c ft_putchar_fd.c ft_puthex_small.c ft_puthex_caps.c ft_putnbr_fd.c ft_putptr.c ft_putstr_fd.c

OBJS = $(SRC:.c=.o)
CC = cc
CCfLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re