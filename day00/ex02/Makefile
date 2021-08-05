NAME = account

SRC =   tests.cpp   \
        Account.cpp \

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
