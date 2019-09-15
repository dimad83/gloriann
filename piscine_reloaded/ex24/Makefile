NAME = libft.a

INCLUDES = -I includes

GCC = gcc

FLAG = -Wall -Wextra -Werror -c

CFILE = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

OFILE = $(CFILE:srcs/%.c=%.o)

all: $(NAME)

$(NAME):
	$(GCC) $(FLAG) $(CFILE) $(INCLUDES)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean:
	rm -rf $(OFILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re