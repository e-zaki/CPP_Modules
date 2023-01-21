NAME=easyfind
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC = main.cpp
HEADER = easyfind.hpp
OBJ=$(SRC:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all