# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 16:53:33 by graja             #+#    #+#              #
#    Updated: 2021/12/14 16:57:58 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= test
SRC		= Account.cpp tests.cpp
CC		= c++
FLAGS		= -Werror -Wextra -Wall

$(NAME)	:	all

all	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:

fclean	:
	rm -f $(NAME)

re	:
	fclean all
