/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

struct general *init_general(void)
{
    struct general *general = malloc(sizeof(general));
    sfVideoMode mode_video = {1920, 1080, 32};
    general->window = sfRenderWindow_create(mode_video, "HydrantRunner"
            , sfDefaultStyle, NULL);
    general->clock = sfClock_create();
    general->player_c = sfClock_create();
    general->life = 1;
    return general;
}

struct game *init_game(void)
{
    struct game *game = malloc(sizeof(struct game));
    game->general = init_general();
    game->game_sprite = sprite_init();
    game->game_sprite = sprite_rect_init(game->game_sprite);
    game->menu_end = init_end_menu(*game);
    return game;
}

struct pos_sprite *init_pos(void)
{
    struct pos_sprite *posSprite = malloc(sizeof (struct pos_sprite));

    posSprite->character_position.x = 200;
    posSprite->character_position.y = 200;
    posSprite->grav = 0;
    posSprite->obstacle_pos.x =  -300;
    posSprite->obstacle_pos.y = 480;
    posSprite->grav = 0;
    return posSprite;
}