# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 12:52:57 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/12 12:52:58 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=iter.cpp main.cpp

ARGS=-Wall -Wextra -Werror

NAME=iter

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

