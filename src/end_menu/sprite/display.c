/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../../includes/struct.h"

void display_sprite_endmenu(game_t game)
{
    sfRenderWindow_clear(game.general->window, sfBlack);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->background, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->far_building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->skill_building_bg, NULL);
    sfRenderWindow_drawSprite(game.general->window, game.game_sprite->road, NULL);
    sfRenderWindow_drawText(game.general->window, game.menu_end->title, NULL);
    sfRenderWindow_drawText(game.general->window, game.menu_end->text_score, NULL);
    sfRenderWindow_drawText(game.general->window, game.menu_end->score, NULL);
    sfRenderWindow_drawText(game.general->window, game.menu_end->restart, NULL);
    sfRenderWindow_drawText(game.general->window, game.menu_end->lose, NULL);
    sfRenderWindow_display(game.general->window);
}
