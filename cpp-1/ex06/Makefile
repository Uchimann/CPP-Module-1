SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: harlFilter

harlFilter: $(OBJ)
	$(CC) $(OBJ) -o harlFilter

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f harlFilter

re: fclean all

.PHONY: all clean fclean re