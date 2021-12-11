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

enum e_type {
    CHARACTER,
    BACKGROUD,
    GROUND,
};

typedef struct {
    enum e_type object_type;
    sfSprite *sprite_element;
    sfTexture *texure_element;
    sfVector2f position;
    sfIntRect rect;
} game_object_t;

typedef struct game {
    struct sprite_game *game_sprite;
    struct general *general;
} game_t;

typedef struct general {
    sfRenderWindow *window;
} general_t;

typedef struct sprite_game {
    sfSprite *background;
} sprite_t;

void event_manager_menu(sfRenderWindow *window, sfEvent event);
#endif //STRUCT_H
