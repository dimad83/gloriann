NAME = libft.a

SRCS = ft_putchar.c \
	ft_putchar_fd.c \
	ft_putstr.c \

OBJECTS = $(patsubst %.c, %.o, $(SRCS))

INCLUDES = ./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@echo "$(NAME): object files $(OBJECTS) were CREATED"
	@ar rc $(NAME) $(OBJECTS)
	@echo "$(NAME): lib $(NAME) was CREATED"
	@ranlib $(NAME)
	@echo "$(NAME): $(NAME) was INDEXED"

clean:
	@rm -f $(OBJECTS)
	@echo "$(NAME): object files $(OBJECTS) were DELETED"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(NAME) was DELETED"

re: fclean all

