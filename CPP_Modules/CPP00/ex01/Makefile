NAME=PhoneBook
SRC=PhoneBook.cpp main.cpp utils.cpp Contact.cpp
HEADERS=PhoneBook.hpp Contact.hpp utils.hpp
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