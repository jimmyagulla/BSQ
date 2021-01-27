/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Compare the ascii lenght of the strings
*/

#include <unistd.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
        i++;
    if (s1[i] - s2[i] > 0)
        write (1, "1", 1);
    else if (s1[i] - s2[i] < 0)
        write (1, "-1", 2);
    else
        write (1, "0", 1);
    return (0);
}