/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** bsq main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"
#include <stdlib.h>

int my_open(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd < 0)
        return (84);
    return (fd);
}

char *get_map(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat bytes;
    char *buff = 0;
    if (stat(filepath, &bytes) == -1)
        return ("");

    buff = malloc(sizeof(char) * bytes.st_size + 1);
    if(read(fd, buff, bytes.st_size) == -1)
        return ("");
    buff[bytes.st_size] = '\0';
    return (buff);
}

void set_biggest_sq_pos(pos_t *pos)
{
    pos->biggest_sq_x = pos->x;
    pos->biggest_sq_y = pos->y;
    pos->max_size_f = pos->size_actual_sq;
}

void update_structs(pos_t *pos, char **arr)
{
    pos->size_actual_sq = 1;
    while (can_square_grow_by_one(arr, pos) == 1)
        pos->size_actual_sq += 1;
    if (pos->size_actual_sq > pos->max_size_f) {
        set_biggest_sq_pos(pos);
    }
}

void word_loop(pos_t *pos, char **arr)
{
    while (arr[pos->y] != NULL && arr[pos->y][pos->x] != 0) {
        if (arr[pos->y][pos->x] == '.')
            update_structs(pos, arr);
        pos->x += 1;
    }
}