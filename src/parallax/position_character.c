/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void update_position_player(game_t *game)
{
    game->game_sprite->rect_game->chara_rect.left += 150;
    sfSprite_setTextureRect(game->game_sprite->character, game->game_sprite->rect_game->chara_rect);
}