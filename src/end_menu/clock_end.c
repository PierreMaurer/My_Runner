/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void check_clock_end(game_t *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->general->clock)) > 0.03) {
        move_parallax_end(game);
        position_set_end(game);
        sfClock_restart(game->general->clock);
    }
}