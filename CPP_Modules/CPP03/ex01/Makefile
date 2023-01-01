
NAME=ScavTrap
SRC=ClapTrap.cpp main.cpp ScavTrap.cpp
HEADER=Claptrap.hpp ScavTrap.hpp
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