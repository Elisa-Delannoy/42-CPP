# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 15:46:54 by edelanno          #+#    #+#              #
#    Updated: 2025/07/31 11:16:53 by edelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[32mCompilation successful !\033[0m"

$(NAME): $(OBJ)
	@$(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
	@echo "Compilating $@"
	@$(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[32mClean ok\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32mClean ok\033[0m"

re: fclean all
