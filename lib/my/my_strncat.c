/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concatenate two strings
*/

char *my_strncat(char *dest, const char *src, int nb)
{
    int i = 0;
    int l = 0;

    while (dest[l] != 0)
        l++;
    while (i < nb && src[i] != '\0') {
        dest[l] = src[i];
        i++;
        l++;
    }
    dest[l + i] = '\0';
    return (dest);
}