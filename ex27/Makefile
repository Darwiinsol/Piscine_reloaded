# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 15:48:06 by apissier          #+#    #+#              #
#    Updated: 2016/11/22 15:49:17 by apissier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
SRCO = display_file.o
all: $(NAME)
	
$(NAME):
		gcc -c $(FLAGS) display_file.c
		gcc $(SRCO) -o $(NAME)
clean:
		/bin/rm -f $(SRCO)
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
