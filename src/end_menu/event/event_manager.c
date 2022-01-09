/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../../includes/struct.h"

void event_manager_menu_endmenu(struct game *game, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(game->general->window);
    } else if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape) {
        sfRenderWindow_close(game->general->window);
    } else if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEnter) {
        game->game_sprite->posSprite->obstacle_pos.x = 1950;
        game->general->score = 0;
        game->general->life = 1;

    }
}

