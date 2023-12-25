SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: megaphone

megaphone: $(OBJ)
	$(CC) $(OBJ) -o megaphone

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all clean fclean re