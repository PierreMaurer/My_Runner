##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-pierre.maurer
## File description:
## Makefile
##

SRC =	./src/main.c        \
		./src/event_manager.c        \
		./src/init_struct.c        \
		./src/sprite/display_sprite.c        \
		./src/parallax/position_character.c        \
		./src/action/jump.c        \
		./src/action/check_collision.c        \
		./src/clock.c        \
		./src/end_menu/sprite/display.c        \
		./src/end_menu/sprite/parallax.c        \
		./src/end_menu/general_endmenu.c        \
		./src/end_menu/event/event_manager.c        \
		./src/end_menu/init/init_struct.c        \
		./src/end_menu/clock_end.c        \
		./src/parallax/position_pa.c

OBJ =    $(SRC:.c=.o)

LIB = -lcsfml-graphics -lcsfml-window -lcsfml-system
INCLUDE = -I ../include/ -L ./lib/ -lmy -g -Wall -Wextra -Wpedantic

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
