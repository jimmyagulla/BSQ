/*
** EPITECH PROJECT, 2020
** Bistromatic
** File description:
** cascades only
*/

#include <unistd.h>

char *my_strchr(char *base, int i)
{
    int n = 0;

    while (base[n] != 0) {
        if (i == base[n])
            return (base + n);
        n++;
    }
    return (NULL);
}