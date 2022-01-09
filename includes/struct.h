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
    #include <fcntl.h>
    #include "my.h"
typedef struct game {
    struct sprite_game *game_sprite;
    struct end_menu *menu_end;
    struct general *general;
} game_t;

typedef struct end_menu {
    sfText *title;
    sfText *score;
    sfText *text_score;
    sfText *restart;
    sfText *lose;
    sfFont *text_font;
} end_t;

typedef struct general {
    sfRenderWindow *window;
    sfClock *player_c;
    sfClock *clock;
    int life;
    int score;
} general_t;

typedef struct rect_sprite {
    sfIntRect bg_rect;
    sfIntRect building_rect;
    sfIntRect far_rect;
    sfIntRect skill_rect;
    sfIntRect road_rect;
    sfIntRect chara_rect;
    sfIntRect obstacle_rect;
} rect_t;

typedef struct pos_sprite {
    sfVector2f character_position;
    sfVector2f obstacle_pos;
    float grav;
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
    sfSprite *obstacle;
    sfText *score_text;
    sfText *score;

} sprite_t;

void event_manager(struct game *game, sfEvent event);
struct rect_sprite *rect_init(void);
struct sprite_game *sprite_init(void);
struct general *init_general(void);
struct pos_sprite *init_pos(void);
struct game *init_game(void);
void update_position_player(game_t *game);
void position_set (game_t *game);
void move_parallax(game_t *game);
void display_sprite(game_t game);
void check_clock(game_t *game);
void jump(game_t *game);
void check_collision(game_t *game);
void display_sprite_endmenu(game_t game);
void position_set_end(game_t *game);
void move_parallax_end(game_t *game);
void check_clock_end(game_t *game);
void end_menu(game_t *game);
void event_manager_menu_endmenu(struct game *game, sfEvent event);
struct end_menu *init_end_menu(game_t game);
struct rect_sprite *rect_init_second(void);
struct sprite_game *sprite_init_second(struct sprite_game *sprite_game);
struct sprite_game *sprite_init_third(struct sprite_game *sprite_game);
struct sprite_game *sprite_init_four(struct sprite_game *sprite_game);
struct sprite_game *sprite_init_fift(struct sprite_game sprite);
struct sprite_game *sprite_rect_init(struct sprite_game *sprite_game);
struct end_menu *end_menu_init_sec(struct end_menu *menu_end);
struct end_menu *end_menu_init_third(struct end_menu *menu_end);
int gameloop(void);
void help_print(void);
void start_error(void);
int check_exist_map(char *pwd_map);
int fs_understand_return_of_read(int fd , int *buffer , int size);
void destroy_sprite(game_t game);
#endif //STRUCT_H
