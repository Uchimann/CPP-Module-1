SRC = main.cpp PhoneBook.cpp PhoneBookUtils.cpp Contacts.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++ -Wall -Werror -Wextra -std=c++98

all: phonebook

phonebook: $(OBJ)
	$(CC) $(OBJ) -o phonebook

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f phonebook

re: fclean all

.PHONY: all clean fclean re
