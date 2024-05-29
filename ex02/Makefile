# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:34:42 by ftholoza          #+#    #+#              #
#    Updated: 2024/05/29 20:26:02 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC = Dog.cpp main.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
NAME = Animal

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)