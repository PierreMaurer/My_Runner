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
    rect_game = rect_init_second();
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
    return rect_game;
}

struct rect_sprite *rect_init_second(void)
{
    struct rect_sprite *rect_game = malloc(sizeof(rect_t));

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
    rect_game->obstacle_rect.top = 0;
    rect_game->obstacle_rect.height = 880;
    rect_game->obstacle_rect.width = 900;
    rect_game->obstacle_rect.left = 0;
    return rect_game;
}