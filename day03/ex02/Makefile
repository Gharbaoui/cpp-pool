NAME = FragTrap

SRC =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\

GCC = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : fclean all

