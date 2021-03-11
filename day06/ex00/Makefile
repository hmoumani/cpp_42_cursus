# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 16:55:33 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/09 16:55:34 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=Scalar_con.cpp

ARGS=-Wall -Wextra -Werror

NAME=convert

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean

