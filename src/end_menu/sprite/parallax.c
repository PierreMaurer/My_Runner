/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../../includes/struct.h"

void position_set_end(game_t *game)
{
    sfSprite_setTextureRect(game->game_sprite->background, game->game_sprite->rect_game->bg_rect);
    sfSprite_setTextureRect(game->game_sprite->building_bg, game->game_sprite->rect_game->building_rect);
    sfSprite_setTextureRect(game->game_sprite->far_building_bg, game->game_sprite->rect_game->far_rect);
    sfSprite_setTextureRect(game->game_sprite->skill_building_bg, game->game_sprite->rect_game->skill_rect);
    sfSprite_setTextureRect(game->game_sprite->road, game->game_sprite->rect_game->road_rect);
}

void move_parallax_end(game_t *game)
{
    game->game_sprite->rect_game->bg_rect.left += 4;
    game->game_sprite->rect_game->building_rect.left += 8;
    game->game_sprite->rect_game->far_rect.left += 12;
    game->game_sprite->rect_game->skill_rect.left += 16;
    game->game_sprite->rect_game->road_rect.left += 20;
}