NAME=main
SRC=main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS=HumanA.hpp HumanB.hpp Weapon.hpp
CC=c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean;

re: clean all

.PHONY: all clean fclean re