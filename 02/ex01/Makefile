# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/27 14:58:10 by edelanno          #+#    #+#              #
#    Updated: 2025/06/27 16:00:57 by edelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

SRC = ./main.cpp ./Fixed.cpp
OBJ = $(SRC:.cpp=.o)
	
all: $(NAME)
	@echo "\033[32mCompilation successful !\033[0m"
	
$(NAME): $(OBJ)
	$(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
	@echo "Compilating $@"
	@$(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)
	@echo "\033[32mClean ok\033[0m"

fclean:
	rm -f $(NAME)
	@echo "\033[32mClean ok\033[0m"

re: fclean all

	
