#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 01:56:14 by hlabouit          #+#    #+#              #
#    Updated: 2023/10/24 16:51:27 by hlabouit         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = zombieHorde
CPPFILES = main.cpp Zombie.cpp zombieHorde.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-w -w -w -g

all: $(NAME)

$(NAME) : $(CPPOFILES) Zombie.hpp
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re