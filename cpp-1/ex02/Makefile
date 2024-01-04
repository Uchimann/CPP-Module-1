SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: out

out: $(OBJ)
	$(CC) $(OBJ) -o out

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f out

re: fclean all

.PHONY: all clean fclean re