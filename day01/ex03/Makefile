NAME = weapon

SRC =   main.cpp    \
        Weapon.cpp  \
        HumanA.cpp  \
        HumanB.cpp  \

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
