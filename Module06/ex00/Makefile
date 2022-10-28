# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 21:51:05 by hvayon            #+#    #+#              #
#    Updated: 2022/10/28 19:41:25 by hvayon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.cpp)

OBJC = $(SRCS:.cpp=.o)

HEAD = $(wildcard *.hpp)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Convert

CC = c++

all: $(NAME)

$(NAME): $(OBJC) $(HEAD)
	$(CC) $(FLAGS) $(OBJC) -o $@

%.o: %.cpp $(wildcard $(HEAD)/*.hpp)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re