# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 15:00:17 by hmoumani          #+#    #+#              #
#    Updated: 2021/02/02 15:00:19 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=phonebook.cpp Contact.class.cpp

ARGS=-Wall -Wextra -Werror

NAME=phonebook

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean