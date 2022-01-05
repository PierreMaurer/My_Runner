/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

void display_sprite(game_t game)
{
    sfRenderWindow_clear(game.general->window, sfBlack);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->background, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->far_building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->skill_building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->road, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->character, NULL);
    sfRenderWindow_display(game.general->window);
}
