/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../../includes/struct.h"

void help_print(void)
{
    write(1, "Finite runner created with CSFML.\n\n", 35);
    write(1, "USAGE\n  ./my_runner map.txt\n\n\n", 31);
    write(1, "OPTIONS\n  -i                launch the game in infinity mode.\n", 62);
    write(1, "  -h                print the usage and quit.\n\n", 47);
    write(1, "USER INTERACTIONS\n", 18);
    write(1, "  SPACE_KEY        jump.\n", 25);
}

void start_error(void)
{
    write(1, "./my_runner: bad arguments: 0 given but 1 is required\n", 54);
    write(1, "retry with -h\n", 14);
}