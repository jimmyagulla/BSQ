/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** return square root of nb
*/

int my_compute_square_root(int nb)
{
    int nb1 = nb;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);
    while (nb1 > 0 && nb != (nb1 * nb1))
        nb1 = nb1 - 1;
    return (nb1);
}