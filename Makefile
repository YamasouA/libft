C=gcc
CFLAGS=-Wall -Wextra -Werror -c
NAME=libft.a
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re