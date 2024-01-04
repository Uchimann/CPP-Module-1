SRC = main.cpp Utils.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: replace

replace: $(OBJ)
	$(CC) $(OBJ) -o replace

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f replace

re: fclean all

.PHONY: all clean fclean re