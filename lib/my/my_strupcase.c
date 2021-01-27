/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** Compare the ascii lenght of the strings
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}