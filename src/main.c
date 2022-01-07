/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

int main(void)
{
    struct game *game = init_game();
    while (sfRenderWindow_isOpen(game->general->window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(game->general->window, &event))
            event_manager_menu(game, event);
        check_clock(game);
        display_sprite(*game);
    }
    return 0;
}