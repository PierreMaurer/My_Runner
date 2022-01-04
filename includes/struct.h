/*
** EPITECH PROJECT, 2021
** MY_LS
** File description:
** main
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct game {
    struct sprite_game *game_sprite;
    struct general *general;
} game_t;

typedef struct general {
    sfRenderWindow *window;
    sfClock *clock;
    sfClock *clock2;
    sfEvent event;
} general_t;

typedef struct rect_sprite {
    sfIntRect bg_rect;
    sfIntRect building_rect;
    sfIntRect far_rect;
    sfIntRect skill_rect;
    sfIntRect road_rect;
    sfIntRect player_rect;
} rect_t;

typedef struct sprite_game
{
    struct rect_sprite *rect_game;
    sfSprite *background;
    sfSprite *building_bg;
    sfSprite *far_building_bg;
    sfSprite *skill_building_bg;
    sfSprite *road;
    sfSprite *player;

} sprite_t;

void event_manager_menu(struct game *game);
#endif //STRUCT_H
