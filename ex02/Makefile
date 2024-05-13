# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 16:23:43 by lannur-s          #+#    #+#              #
#    Updated: 2024/04/30 16:24:49 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= account
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

INCLUDE = -I.

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m # No Color

SRC = tests.cpp \
		Account.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "${GREEN}Makefile finished successfully!${NC} Run '${YELLOW}${NAME}'${NC}to execute."

%.o: %.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	
$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
