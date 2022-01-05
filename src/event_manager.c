/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

void event_manager_menu(struct game *game)
{
    if (game->general->event.type == sfEvtClosed)
        sfRenderWindow_close(game->general->window);
    if (game->general->event.type == sfEvtKeyPressed && game->general->event.key.code == sfKeyEscape) {
        sfSprite_destroy(game->game_sprite->background);
        sfSprite_destroy(game->game_sprite->building_bg);
        sfSprite_destroy(game->game_sprite->far_building_bg);
        sfSprite_destroy(game->game_sprite->skill_building_bg);
        sfSprite_destroy(game->game_sprite->road);
        sfRenderWindow_close(game->general->window);
    }
}

