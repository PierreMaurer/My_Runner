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
        while (sfRenderWindow_pollEvent(game->general->window, &game->general->event))
            event_manager_menu(game);
        if (sfTime_asSeconds(sfClock_getElapsedTime(game->general->clock)) > 0.03) {
            move_parallax(game);
            position_set(game);
            sfClock_restart(game->general->clock);
        }
        display_sprite(*game);
    }
    return 0;
}