#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 01:45:31 by hlabouit          #+#    #+#              #
#    Updated: 2023/11/16 05:53:15 by hlabouit         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fragtrap
CPPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-w -w -w -g c++98

all: $(NAME)

$(NAME) : $(CPPOFILES) ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re