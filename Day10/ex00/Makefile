# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gloriann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/11 11:13:34 by gloriann          #+#    #+#              #
#    Updated: 2019/08/11 16:48:48 by gloriann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o \
	ft_strlen.o ft_swap.o

HEADERS = includes

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror -iquote $(HEADERS) -c $(SRCS) 
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

