##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-pierre.maurer
## File description:
## Makefile
##

SRC =	./src/main.c        \
		./src/event_manager.c

OBJ =    $(SRC:.c=.o)

LIB = -lcsfml-graphics -lcsfml-window -lcsfml-system
INCLUDE = -I ../include/ -L ./lib/ -lmy -g

NAME =	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(SRC) $(LIB) $(INCLUDE)
	make clean

clean:
	make -C ./lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all
