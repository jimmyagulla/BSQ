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

int verify_first_line(values_t values)
{
    int i = 0;

    while (values.file_content[i] != 0 && '0' <= values.file_content[i] && \
    values.file_content[i] <= '9')
        i++;
    if (values.file_content[i] != '\n' || i == 0)
        return (84);
    return (0);
}

int verify_line_chars(char **arr)
{
    int nb_lines = my_getnbr(arr[0]);
    int nb_cols = my_strlen(arr[1]);
    int colomns = 0;

    for (int lines = 1; lines != nb_lines; lines++) {
        while (arr[lines][colomns] != 0) {
            if (arr[lines][colomns] != '.' && arr[lines][colomns] != 'o' && \
            arr[lines][colomns] != '\n')
                return (84);
            colomns++;
        }
        if (colomns != nb_cols)
            return (84);
        colomns = 0;
    }
    return (0);
}

int verify_nb_lines(char **arr)
{
    int nb_lines = my_getnbr(arr[0]);
    int line_count = 0;

    while (arr[line_count] != 0)
        line_count++;
    if (line_count != nb_lines + 1)
        return (84);
    return (0);
}

int error_handling(char **arr, values_t values)
{
    if (verify_first_line(values) == 84 || verify_line_chars(arr) == 84)
        return (84);
    if (verify_nb_lines(arr) == 84)
        return (84);
    return (0);
}