NAME=Animal
SRC=Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
HEADER=Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
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
