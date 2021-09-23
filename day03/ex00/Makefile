NAME = ClapTrap

SRC =	main.cpp		\
		ClapTrap.cpp	\

GCC = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : fclean all

