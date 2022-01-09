/*
** EPITECH PROJECT, 2021
** MY_RUNNER
** File description:
** main
*/

#include "../../includes/struct.h"

int check_exist_map(char *pwd_map)
{
    int file = open(pwd_map, O_RDONLY);

    if (file == -1)
        return 84;
    return file;
}

int fs_understand_return_of_read(int fd , int *buffer , int size)
{
    int	file;

    file = read(fd, buffer, size);
    if (file == size) {
        return 0;
    } else if (file == -1) {
        write(1, "Error File...\n", 14);
        return 84;
    }
    if (file == 0) {
        return 0;
    }
    return 0;
}