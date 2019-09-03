# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slenore <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 10:03:30 by slenore           #+#    #+#              #
#    Updated: 2019/08/18 22:56:18 by gloriann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS =   -Wall -Wextra -Werror -o 
FILE = colle-2
NAMES = paresr ft_create_elem functions ft_string ft_list_push_back

BIN =  $(patsubst  %, %.c, $(NAMES))

all:
	$(CC) $(CFLAGS) $(FILE) $(BIN)

clean:
	rm -f $(FILE)

fclean: clean
