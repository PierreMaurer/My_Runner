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
    sfEvent event;
} general_t;

typedef struct rect_sprite {
    sfIntRect bg_rect;
    sfIntRect building_rect;
    sfIntRect far_rect;
    sfIntRect skill_rect;
    sfIntRect road_rect;
    sfIntRect chara_rect;
} rect_t;

typedef struct pos_sprite {
    sfVector2f character_position;
}posi_t;

typedef struct sprite_game
{
    struct rect_sprite *rect_game;
    struct pos_sprite *posSprite;
    sfSprite *background;
    sfSprite *building_bg;
    sfSprite *far_building_bg;
    sfSprite *skill_building_bg;
    sfSprite *road;
    sfSprite *character;

} sprite_t;

void event_manager_menu(struct game *game);
struct rect_sprite *rect_init(void);
struct sprite_game *sprite_init();
struct general *init_general(void);
struct pos_sprite *init_pos();
struct game *init_game();
void position_set (game_t *game);
void move_parallax(game_t *game);
void display_sprite(game_t game);
#endif //STRUCT_H
