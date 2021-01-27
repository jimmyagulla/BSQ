/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** return power in rec
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (nb > 65536)
        return (0);
    if (nb > 0)
    return (nb * my_compute_power_rec(nb, p - 1));
}