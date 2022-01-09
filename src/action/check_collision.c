/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void check_collision(game_t *game)
{
    int cp_x = game->game_sprite->posSprite->character_position.x;
    int cp_y = game->game_sprite->posSprite->character_position.y;
    int ob_x = game->game_sprite->posSprite->obstacle_pos.x;

    if (cp_x >= ob_x + 170 && cp_x <= ob_x + 300) {
        if (cp_y >= 75) {
            game->general->life--;
        }
    }
}