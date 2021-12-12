/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

struct sprite_game *sprite_init()
{
    sprite_t *sprite_game = malloc(sizeof(sprite_t));

    sprite_game->background = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("ressources/background.png", NULL);
    sfSprite_setTexture(sprite_game->background, texture, sfTrue);

    return sprite_game;
};

struct general *init_general(void)
{
    struct general *general = malloc(sizeof(general));
    sfVideoMode mode_video = {1920, 1080, 32};
    general->window = sfRenderWindow_create(mode_video, "MyRunner"
            , sfDefaultStyle, NULL);
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

int main(void)
{
    struct game *game = init_game();
    while (sfRenderWindow_isOpen(game->general->window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(game->general->window, &event))
            event_manager_menu(game->general->window, event);
        sfRenderWindow_clear(game->general->window, sfBlack);
        sfRenderWindow_drawSprite(game->general->window, game->game_sprite->background, NULL);
        sfRenderWindow_display(game->general->window);
    }
    return 0;
}