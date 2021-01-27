/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** return if nb prime or no
*/

int my_is_prime(int nb)
{
    int t = nb - 1;

    if (nb <= 	1)
        return (0);
    while ((nb/t) * t != nb) {
        t--;
    }
    if (t == 1)
        return (1);
    return (0);
}