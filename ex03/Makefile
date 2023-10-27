#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 23:13:03 by hlabouit          #+#    #+#              #
#    Updated: 2023/10/27 18:09:58 by hlabouit         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = attack
CPPFILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 #-w -w -w -g c++98

all: $(NAME)

$(NAME) : $(CPPOFILES) #.hpp
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re