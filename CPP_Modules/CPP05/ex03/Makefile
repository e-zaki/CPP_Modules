NAME=Intern
SRC=Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
HEADER=Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
	PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp
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

re: clean all

.PHONY: all clean fclean re
