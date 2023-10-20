# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 18:08:54 by hlabouit          #+#    #+#              #
#    Updated: 2023/09/28 22:46:03 by hlabouit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFILES = main.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(CPPOFILES)
	$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp megaphone.hpp
	$(CPPC) $(CPPFLAGS) $< -c

clean:
	rm -rf $(CPPOFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re