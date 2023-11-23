# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 20:44:47 by hlabouit          #+#    #+#              #
#    Updated: 2023/11/23 17:06:28 by hlabouit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract
CPPFILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-w -w -w -g c++98

all: $(NAME)

$(NAME) : $(CPPOFILES) Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re