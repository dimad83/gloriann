NAME = libft.a

SRCS = ft_bzero.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putstr.c \
	ft_strcat.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strncat.c \
	ft_strncpy.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_strtrim.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_putendl.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putnbr.c \
	ft_strsplit.c \
	ft_itoa.c

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

.PHONY: all clean fclean re
