/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

void check_clock(game_t *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->general->player_c)) > 0.05) {
        update_position_player(game);
        sfClock_restart(game->general->player_c);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->general->clock)) > 0.03) {
        move_parallax(game);
        position_set(game);
        sfClock_restart(game->general->clock);
    }
}