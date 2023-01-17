NAME=serialize
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC = main.cpp Serialize.cpp
HEADER = Data.hpp
OBJ=$(SRC:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ) : $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all