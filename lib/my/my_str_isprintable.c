/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** tells if string's characters are all printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= ' ')
            i++;
        else
            return (0);
    }
    return (1);
}