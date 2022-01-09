/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

void event_manager(struct game *game, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(game->general->window);
    } else if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape) {
        sfRenderWindow_close(game->general->window);
    } else if (event.type == sfEvtKeyPressed && event.key.code == sfKeySpace) {
        if (game->game_sprite->posSprite->grav == 0)
            game->game_sprite->posSprite->grav = 1;
    }
}

