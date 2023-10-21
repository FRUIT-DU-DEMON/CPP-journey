# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 02:18:59 by hlabouit          #+#    #+#              #
#    Updated: 2023/10/21 02:18:59 by hlabouit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 80s_PhoneBook
CPPFILES = PhoneBook.cpp Contact.cpp the_80s_PhoneBook.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(CPPOFILES)
	@$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp PhoneBook.hpp
	@$(CPPC) $(CPPFLAGS) $< -c

clean:
	@rm -rf $(CPPOFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re