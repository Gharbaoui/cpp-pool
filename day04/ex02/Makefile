NAME =  Abstract

SRC =   main.cpp        \
        Animal.cpp      \
        Dog.cpp         \
        Cat.cpp         \
        Brain.cpp       \

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
