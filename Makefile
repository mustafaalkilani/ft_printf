

NAME	= libftprintf.a

SRC = 

OBJS = $(SRC:.c=.o)
CC = cc
CCfLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) %(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re