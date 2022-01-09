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

void destroy_sprite(game_t game)
{
    sfSprite_destroy(game.game_sprite->background);
    sfSprite_destroy(game.game_sprite->building_bg);
    sfSprite_destroy(game.game_sprite->far_building_bg);
    sfSprite_destroy(game.game_sprite->skill_building_bg);
    sfSprite_destroy(game.game_sprite->road);
    sfSprite_destroy(game.game_sprite->character);
    sfSprite_destroy(game.game_sprite->obstacle);
    sfText_destroy(game.game_sprite->score_text);
    sfText_destroy(game.game_sprite->score);
    sfText_destroy(game.menu_end->title);
    sfText_destroy(game.menu_end->score);
    sfText_destroy(game.menu_end->text_score);
    sfText_destroy(game.menu_end->restart);
    sfText_destroy(game.menu_end->lose);
    sfFont_destroy(game.menu_end->text_font);
    sfClock_destroy(game.general->player_c);
    sfClock_destroy(game.general->clock);
    sfRenderWindow_close(game.general->window);
}
