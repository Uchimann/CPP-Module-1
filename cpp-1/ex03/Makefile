SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: program

program: $(OBJ)
	$(CC) $(OBJ) -o program

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f program

re: fclean all

.PHONY: all clean fclean re