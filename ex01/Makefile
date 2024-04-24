# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 10:42:15 by lannur-s          #+#    #+#              #
#    Updated: 2024/04/24 17:47:39 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= myphonebook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

INCLUDE = -I./include


SRC = contact.cpp \
		phonebook.cpp \
		utils.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	
$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
