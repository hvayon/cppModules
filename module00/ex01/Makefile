SRCS = PhoneBook.cpp main.cpp Contact.cpp

OBJC = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook 

CC = c++

all: $(NAME)

$(NAME): $(OBJC)
	$(CC) $(FLAGS) $(OBJC) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
