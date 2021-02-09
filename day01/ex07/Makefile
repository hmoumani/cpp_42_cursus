# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/07 18:41:00 by hmoumani          #+#    #+#              #
#    Updated: 2021/02/07 18:41:04 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=replace.cpp

FLAGS=-Wextra -Werror -Wall

NAME=replace

$(NAME):
	g++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

re: fclean all

fclean: clean

clean: 
	rm -rf replace