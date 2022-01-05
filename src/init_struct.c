/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

//TODO Opti rect_init
struct rect_sprite *rect_init(void)
{
    struct rect_sprite *rect_game = malloc(sizeof(rect_t));
    rect_game->bg_rect.height = 1080;
    rect_game->bg_rect.left = 0;
    rect_game->bg_rect.width = 1920;
    rect_game->bg_rect.top = 0;
    rect_game->building_rect.height = 1080;
    rect_game->building_rect.left = 0;
    rect_game->building_rect.width = 1920;
    rect_game->building_rect.top = 0;
    rect_game->far_rect.height = 1080;
    rect_game->far_rect.left = 0;
    rect_game->far_rect.width = 1920;
    rect_game->far_rect.top = 0;
    rect_game->skill_rect.height = 1080;
    rect_game->skill_rect.left = 0;
    rect_game->skill_rect.width = 1920;
    rect_game->skill_rect.top = 0;
    rect_game->road_rect.height = 1080;
    rect_game->road_rect.left = 0;
    rect_game->road_rect.width = 1920;
    rect_game->road_rect.top = 0;

    rect_game->chara_rect.top = 0;
    rect_game->chara_rect.height = 150;
    rect_game->chara_rect.width = 100;
    rect_game->chara_rect.left = 60;
    return rect_game;
}

struct sprite_game *sprite_init()
{
    sprite_t *sprite_game = malloc(sizeof(sprite_t));
    sprite_game->rect_game = rect_init();
    sprite_game->posSprite = init_pos();
    sprite_game->background = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("ressources/sky.png", NULL);
    sfTexture_setRepeated(texture, sfTrue);
    sfSprite_setTextureRect(sprite_game->background, sprite_game->rect_game->bg_rect);
    sfSprite_setTexture(sprite_game->background, texture, sfTrue);

    sprite_game->building_bg = sfSprite_create();
    sfTexture *texture_2 = sfTexture_createFromFile("ressources/buildings.png", NULL);
    sfTexture_setRepeated(texture_2, sfTrue);
    sfSprite_setTextureRect(sprite_game->building_bg, sprite_game->rect_game->building_rect);
    sfSprite_setTexture(sprite_game->building_bg, texture_2, sfTrue);

    sprite_game->far_building_bg = sfSprite_create();
    sfTexture *texture_3 = sfTexture_createFromFile("ressources/wall2.png", NULL);
    sfTexture_setRepeated(texture_3, sfTrue);
    sfSprite_setTextureRect(sprite_game->far_building_bg, sprite_game->rect_game->far_rect);
    sfSprite_setTexture(sprite_game->far_building_bg, texture_3, sfTrue);

    sprite_game->skill_building_bg = sfSprite_create();
    sfTexture *texture_4 = sfTexture_createFromFile("ressources/wall1.png", NULL);
    sfTexture_setRepeated(texture_4, sfTrue);
    sfSprite_setTextureRect(sprite_game->skill_building_bg, sprite_game->rect_game->skill_rect);
    sfSprite_setTexture(sprite_game->skill_building_bg, texture_4, sfTrue);

    sprite_game->road = sfSprite_create();
    sfTexture *texture_5 = sfTexture_createFromFile("ressources/road.png", NULL);
    sfTexture_setRepeated(texture_5, sfTrue);
    sfSprite_setTextureRect(sprite_game->road, sprite_game->rect_game->road_rect);
    sfSprite_setTexture(sprite_game->road, texture_5, sfTrue);

    sprite_game->character = sfSprite_create();
    sfVector2f scale_character;
    scale_character.x = 7;
    scale_character.y = 7;
    sfTexture *texture_char = sfTexture_createFromFile("ressources/Run.png", NULL);
    sfTexture_setRepeated(texture_char, sfTrue);
    sfSprite_setTexture(sprite_game->character, texture_char, sfTrue);
    sfSprite_setScale(sprite_game->character, scale_character);
    sfSprite_setTextureRect(sprite_game->character, sprite_game->rect_game->chara_rect);
    sfSprite_setPosition(sprite_game->character, sprite_game->posSprite->character_position);

    return sprite_game;
};

struct general *init_general(void)
{
    struct general *general = malloc(sizeof(general));
    sfVideoMode mode_video = {1920, 1080, 32};
    general->window = sfRenderWindow_create(mode_video, "MyRunner"
            , sfDefaultStyle, NULL);
    general->clock = sfClock_create();
    return general;
}

struct game *init_game()
{
    struct game *game = malloc(sizeof(struct game));
    if (game == NULL)
        printf("Pas ouf");
    game->general = init_general();
    game->game_sprite = sprite_init();
    return game;
}

struct pos_sprite *init_pos()
{
    struct pos_sprite *posSprite = malloc(sizeof (struct pos_sprite));

    posSprite->character_position.x = 200;
    posSprite->character_position.y = 200;
    return posSprite;
}