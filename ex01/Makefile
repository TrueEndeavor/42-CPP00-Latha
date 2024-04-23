# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 10:42:15 by lannur-s          #+#    #+#              #
#    Updated: 2024/04/23 13:32:15 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= myphonebook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -I./include
RM		= rm -rf

INCLUDES = -I./include

SRC = contact.cpp \
		phonebook.cpp \
		main.cpp

%.o: %.cpp
	$(CC) $(CCFLAGS) $(INCLUDES) $(SRC) $< -o $@

OBJ = $(SRC:%.cpp=%.o)


$(NAME): $(OBJ)
	@ $(CC) $(FLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
