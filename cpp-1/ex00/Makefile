SRC = main.cpp RandomChump.cpp Zombie.cpp NewZombie.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: Zombie

Zombie: $(OBJ)
	$(CC) $(OBJ) -o Zombie

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f Zombie

re: fclean all

.PHONY: all clean fclean re