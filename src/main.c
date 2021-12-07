/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

int main(void)
{
    sfVideoMode mode_video = {1920, 1080, 32};
    sfRenderWindow* window;
    window = sfRenderWindow_create(mode_video, "FireHunter"
            , sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
            event_manager_menu(window, event);
    }
    return 0;
}