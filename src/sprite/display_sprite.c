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
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->obstacle, NULL);
    sfRenderWindow_drawText(game.general->window, game.game_sprite->score_text, NULL);
    sfText_setString(game.game_sprite->score, convert_i_c(game.general->score));
    sfRenderWindow_drawText(game.general->window, game.game_sprite->score, NULL);
    sfRenderWindow_display(game.general->window);
}
