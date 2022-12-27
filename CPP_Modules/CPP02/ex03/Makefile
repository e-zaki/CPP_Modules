NAME=Fixed
SRC=Fixed.cpp main.cpp Point.cpp bsp.cpp
HEADER=Fixed.hpp Point.hpp
CC=c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean;

re: clean all

.PHONY: all clean fclean re