NAME = zombie

SRC =   main.cpp        \
        newZombie.cpp   \
        randomChump.cpp \
        Zombie.cpp      \

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
