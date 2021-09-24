NAME =  Animal

SRC =   main.cpp        \
        Animal.cpp      \
        Dog.cpp         \
        Cat.cpp         \
        WrongAnimal.cpp \
        WrongCat.cpp \

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
