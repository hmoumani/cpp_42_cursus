# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 12:55:06 by hmoumani          #+#    #+#              #
#    Updated: 2021/02/02 12:55:07 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC=megaphone.cpp

ARGS=-Wall -Wextra -Werror

NAME=megaphone

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean