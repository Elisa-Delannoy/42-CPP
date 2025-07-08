# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 09:52:25 by edelanno          #+#    #+#              #
#    Updated: 2025/07/08 10:14:37 by edelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

SRC =
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "\033[32mCompilation successful !\033[0m"

$(NAME) = $(OBJ)
	$(CFLAGS) $(OBJ) -o $@

%.o:%.cpp
	$(CFLAGS) $(OBJ) -c $< -o $@

clean:
	@rm -rf $(NAME)
	@echo "\033[32mClean ok\033[0m"

flcean:
	@rm -rf $(OBJ)
	@echo "\033[32mClean ok\033[0m"

re: fclean all