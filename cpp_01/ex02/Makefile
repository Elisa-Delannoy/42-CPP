# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/24 14:17:25 by edelanno          #+#    #+#              #
#    Updated: 2025/06/27 10:24:41 by edelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[32mCompilation successful !\033[0m"

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

%.o:%.cpp
	@echo "Compilating $@"
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[32mClean ok\033[0m"

fclean:
	@rm -f $(NAME)
	@echo "\033[32mClean ok\033[0m"

re: fclean all

