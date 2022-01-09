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
        if (game->general->life) {
            sfEvent event;
            while (sfRenderWindow_pollEvent(game->general->window, &event))
                event_manager(game, event);
            check_clock(game);
            display_sprite(*game);
        }
        if (!game->general->life) {
            end_menu(game);
        }
    }
    return 0;
}