/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenate two strings
*/

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int l = 0;

    while (dest[l] != '\0')
        l++;
    for (i = 0; src[i] != '\0'; i++) {
        dest [l] = src[i];
        l++;
    }
    dest[l + i] = '\0';
    return (dest);
}