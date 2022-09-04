SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone 

CC = c++

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $@

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
