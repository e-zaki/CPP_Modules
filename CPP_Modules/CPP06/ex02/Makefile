NAME=identify
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC = main.cpp fcts.cpp Base.cpp A.cpp B.cpp C.cpp
HEADER = Base.hpp A.hpp B.hpp C.hpp
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