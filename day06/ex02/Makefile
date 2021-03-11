# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 16:46:45 by hmoumani          #+#    #+#              #
#    Updated: 2021/03/11 16:46:51 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=A.cpp B.cpp C.cpp Base.cpp utils.cpp main.cpp

ARGS=-Wall -Wextra -Werror

NAME=identify

$(NAME):
	g++ $(ARGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean
