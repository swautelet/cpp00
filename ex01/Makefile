SRC = Contact.cpp Phonebook.cpp Main.cpp
NAME = Phonebook
CFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(CFLAGS) $(SRC) -o $(NAME)

.o:.c
	g++ -c $(CFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.phony : fclean clean re all