# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 16:47:37 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/12 16:47:39 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp

ARGS=-Wall -Wextra -Werror

NAME=array

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

