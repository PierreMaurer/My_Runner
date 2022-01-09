/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void end_menu(game_t *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->general->window, &event))
        event_manager_menu_endmenu(game, event);
    check_clock_end(game);
    sfText_setString(game->menu_end->score, convert_i_c(game->general->score));
    display_sprite_endmenu(*game);
}