NAME = phonebook

SRC =   phone-book.cpp  \
        phone-func.cpp  \

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean

re: fclean all
