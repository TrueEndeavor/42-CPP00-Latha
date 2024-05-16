# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 15:49:02 by lannur-s          #+#    #+#              #
#    Updated: 2024/05/16 09:49:33 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m # No Color

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "${GREEN}Makefile finished successfully!${NC} Run '${YELLOW}${NAME}'${NC}to execute."

$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)


clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
