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
#include <stdio.h>
#include <assert.h>

int can_square_grow_by_one(char **arr, pos_t *pos)
{
    int count_points = 0;
    int count_valid_lines = 0;
    int y = pos->y;

    for (; count_valid_lines < (pos->size_actual_sq + 1) \
    && y <= pos->nb_lines; count_valid_lines++) {
        for (int x = pos->x; arr[y][x] == '.'; x++)
            count_points += 1;
        if (count_points < (pos->size_actual_sq +1))
            return (0);
        count_points = 0;
        y += 1;
    }
    if (count_valid_lines >= (pos->size_actual_sq + 1))
        return (1);
    return (0);
}

void find_largest_square(char **arr, pos_t *pos)
{
    pos->max_size_f = 0;
    pos->x = 0;
    pos->y = 1;
    while (arr[pos->y]) {
        word_loop(pos, arr);
        pos->x = 0;
        pos->y += 1;
    }
}

void printf_map_x(char **arr, pos_t *pos)
{
    int x = pos->biggest_sq_x;
    int y = pos->biggest_sq_y;
    int len = my_strlen(arr[1]);

    for (int get_lsize = 0; get_lsize < pos->max_size_f; get_lsize++) {
        for (int get_csize = 0; get_csize < pos->max_size_f; get_csize++)
            arr[get_lsize + y][get_csize + x] = 'x';
    }
    for (int i = 1; arr[i] != NULL; i++)
        write (1, arr[i], len);
}

int bsq_function(char const *filepath)
{
    char **arr;
    values_t values;
    pos_t *pos = malloc(sizeof(pos_t));;

    values.fd = my_open(filepath);
    if (values.fd == 84)
        return (84);
    values.file_content = get_map(filepath);
    arr = my_str_to_word_array_delim(values.file_content , "\n");
    if (error_handling(arr, values) == 84 || values.file_content[0] == '\0')
        return (84);
    pos->nb_lines = my_getnbr(values.file_content[0] == '\0' ? "0" : arr[0]);
    find_largest_square(arr, pos);
    printf_map_x(arr, pos);
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
    free(pos);
    free(values.file_content);
    return (0);
}

int main(int argc, char const **argv)
{
    if (argc != 2 || bsq_function(argv[1]) == 84) {
        printf("error");
        return (84);
    }
    return (0);
}