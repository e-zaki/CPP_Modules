NAME=Abstract
SRC=Animal.cpp main.cpp Dog.cpp Cat.cpp Brain.cpp
HEADER=Animal.hpp Dog.hpp Cat.hpp Brain.hpp
CC=c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean;

re: clean all

.PHONY: all clean fclean re
