/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../../includes/struct.h"

struct end_menu *init_end_menu(game_t game)
{
    struct end_menu *menu_end = malloc(sizeof (struct end_menu));

    menu_end->text_font = sfFont_createFromFile("ressources/font.otf");

    menu_end->title = sfText_create();
    sfVector2f pos_title;
    pos_title.x = 606;
    pos_title.y = 270;
    sfText_setString(menu_end->title, "Hydrant Jump");
    sfText_setCharacterSize(menu_end->title, 100);
    sfText_setPosition(menu_end->title, pos_title);
    sfText_setFont(menu_end->title, menu_end->text_font);

    menu_end->text_score = sfText_create();
    sfVector2f tx_score_pos;
    tx_score_pos.x = 606;
    tx_score_pos.y = 600;
    sfText_setString(menu_end->text_score, "Your score: ");
    sfText_setCharacterSize(menu_end->text_score, 70);
    sfText_setPosition(menu_end->text_score, tx_score_pos);
    sfText_setFont(menu_end->text_score, menu_end->text_font);

    menu_end->score = sfText_create();
    sfVector2f score_pos;
    sfFont *score_font = sfFont_createFromFile("ressources/font.ttf");
    score_pos.x = 1050;
    score_pos.y = 600;
    sfText_setCharacterSize(menu_end->score, 70);
    sfText_setPosition(menu_end->score, score_pos);
    sfText_setFont(menu_end->score, score_font);

    menu_end->lose = sfText_create();
    sfVector2f lose_pos;
    lose_pos.x = 680;
    lose_pos.y = 450;
    sfText_setCharacterSize(menu_end->lose, 90);
    sfText_setString(menu_end->lose, "You Lose !");
    sfText_setPosition(menu_end->lose, lose_pos);
    sfText_setFont(menu_end->lose, menu_end->text_font);


    menu_end->restart = sfText_create();
    sfVector2f rest_pos;
    rest_pos.x = 575;
    rest_pos.y = 730;
    sfText_setString(menu_end->restart, "Press ENTER to restart");
    sfText_setCharacterSize(menu_end->restart, 70);
    sfText_setPosition(menu_end->restart, rest_pos);
    sfText_setFont(menu_end->restart, menu_end->text_font);

    return menu_end;
}

