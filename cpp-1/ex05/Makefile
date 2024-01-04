SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: harl

harl: $(OBJ)
	$(CC) $(OBJ) -o harl

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f harl

re: fclean all

.PHONY: all clean fclean re