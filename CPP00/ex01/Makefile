NAME=PhoneBook
SRC=PhoneBook.cpp main.cpp utils.cpp
CC=g++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
re: clean all

.PHONY: all clean re