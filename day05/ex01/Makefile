NAME =	Form

SRC = 	Bureaucrat.cpp	\
		main.cpp		\
		Form.cpp		\

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
