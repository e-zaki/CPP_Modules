NAME=Bureaucrat
SRC=Bureaucrat.cpp main.cpp
HEADER=Bureaucrat.hpp
CC=c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean;
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
