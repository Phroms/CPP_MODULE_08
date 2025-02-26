# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 17:32:22 by agrimald          #+#    #+#              #
#    Updated: 2025/02/26 19:49:15 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
CYAN = \033[96m
YELLOW = \033[93m
RED = \033[91m
END_COLOR = \033[0m

SRC = Span.cpp main.cpp

INC = Span.hpp

OBJECTS = $(SRC:.cpp=.o)

all: banner $(NAME)

banner:
		@printf "\n"

$(NAME): $(OBJECTS)
		@printf "$(CYAN)\nCompiling!!\n$(END_COLOR)\n"
		@$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp $(INC) Makefile
		@printf "$(YELLOW)Generating Objects .... %s $(END_COLOR)\r\n" $@
		@$(CPP) $(CPPFLAGS) -c $< -o $@

fclean: clean
		@$(RM) $(NAME) $(OBJECTS)

clean:
		@printf "$(RED)\nRemoving!!\n$(END_COLOR)\n"
		@$(RM) $(OBJECTS)

re: fclean all

.PHONY: re fclean clean all
