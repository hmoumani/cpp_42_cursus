# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 09:53:54 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/12 09:53:56 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp

ARGS=-Wall -Wextra -Werror

NAME=function

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean
