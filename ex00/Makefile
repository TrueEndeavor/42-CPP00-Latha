# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 15:49:02 by lannur-s          #+#    #+#              #
#    Updated: 2024/05/08 19:47:50 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)


$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
