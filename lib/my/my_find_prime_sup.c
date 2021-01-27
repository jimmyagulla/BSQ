/*
** EPITECH PROJECT, 2020
** my_compute_factorial
** File description:
** return smallest prime nb
*/

int my_isp(int nb);

int my_find_prime_sup(int nb)
{
    if (nb <= 1)
        return (2);
    if (my_isp(nb) > 0)
        return (nb);
    nb = nb + 1;
    return (my_find_prime_sup(nb));
}

int my_isp(int nb)
{
    int t = nb - 1;

    while ((nb/t) * t != nb)
        t--;
    if (t == 1)
        return (nb);
    return (0);
}