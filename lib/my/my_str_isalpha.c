/*
** EPITECH PROJECT, 2020
** my_str_is_alpha.c
** File description:
** tells if there is other than alphabetical characters in a string
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}