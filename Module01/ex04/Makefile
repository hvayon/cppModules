SRCS = $(wildcard *.cpp)

OBJC = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = replace

CC = c++

all: $(NAME)

$(NAME): $(OBJC)
	$(CC) $(FLAGS) $(OBJC) -o $@

%.o: %.cpp $(wildcard $(HEAD)/*.hpp)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re