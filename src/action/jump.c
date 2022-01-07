/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void jump(game_t *game)
{
    if (game->game_sprite->posSprite->grav == 1)
        game->game_sprite->posSprite->character_position.y -= 50;
    if (game->game_sprite->posSprite->grav == -1)
        game->game_sprite->posSprite->character_position.y += 50;

    if (game->game_sprite->posSprite->character_position.y == -150)
        game->game_sprite->posSprite->grav = -1;
    if (game->game_sprite->posSprite->character_position.y == 200)
        game->game_sprite->posSprite->grav = 0;
}