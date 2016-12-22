# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 16:31:58 by apissier          #+#    #+#              #
#    Updated: 2016/11/21 16:43:58 by apissier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
INCLUDES=./includes/
PATH_SRC=./srcs/
CFLAGS+= -Wall -Werror -Wextra -I $(INCLUDES)
SRC=$(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
OBJ=$(SRC:.c=.o)

all:
		make $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean :
		/bin/rm -f $(OBJ)
fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
