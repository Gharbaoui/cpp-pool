NAME = Fixed

SRC =   Fixed.cpp   \
        main.cpp    \

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
