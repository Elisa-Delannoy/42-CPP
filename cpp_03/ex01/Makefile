# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/01 14:27:56 by edelanno          #+#    #+#              #
#    Updated: 2025/07/02 16:38:45 by edelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)
	
all: $(NAME)
	@echo "\033[32mCompilation successful !\033[0m"
	
$(NAME): $(OBJ)
	$(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
	@echo "Compilating $@"
	@$(CFLAGS) -c $< -o $@
	
clean:
	@rm -f $(OBJ)
	@echo "\033[32mClean ok\033[0m"

fclean:
	@rm -f $(NAME)
	@echo "\033[32mClean ok\033[0m"

re: fclean all
