# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 13:57:32 by graja             #+#    #+#              #
#    Updated: 2021/12/14 08:08:54 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phoney
SRC	=	Pbook.class.cpp Pbook.public.class.cpp Contact.class.cpp phoney.cpp
CC	=	c++
FLAGS	=	-Werror -Wextra -Wall

$(NAME)	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all	:	$(NAME)	

clean	:

fclean	:
	rm -f $(NAME)

re	:	fclean all
