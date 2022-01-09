/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../includes/struct.h"

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        help_print();
        return  0;
    } else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'i') {
        gameloop();
        return 0;
    } else if (argc == 1) {
        start_error();
        return 84;
    } else if (argc == 2) {
        int *map = malloc(sizeof(int *) * 31);
        int file = check_exist_map(argv[1]);
        if (fs_understand_return_of_read(file, map, 31) != 0) {
            return 84;
        } else {
            gameloop();
            return 0;
        }
    }
}
