NAME=megaphone
SRC=megaphone.cpp
CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean re