#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 01:56:14 by hlabouit          #+#    #+#              #
#    Updated: 2023/10/24 03:19:52 by hlabouit         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = main
CPPFILES = main.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 #-g!!!

all: $(NAME)

$(NAME) : $(CPPOFILES)
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re