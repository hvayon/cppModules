# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 21:51:05 by hvayon            #+#    #+#              #
#    Updated: 2022/11/06 12:24:29 by hvayon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.cpp)

OBJC = $(SRCS:.cpp=.o)

HEAD = $(wildcard *.hpp)

T_FILE = $(wildcard *.tpp)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = span

CC = c++

all: $(NAME)

$(NAME): $(OBJC) $(HEAD) $(T_FILE)
	$(CC) $(FLAGS) $(OBJC) -o $@

%.o: %.cpp $(wildcard $(HEAD)/*.hpp)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re