# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 12:51:49 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/11 12:51:50 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=Serialization.cpp main.cpp

ARGS=-Wall -Wextra -Werror

NAME=serialize

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

