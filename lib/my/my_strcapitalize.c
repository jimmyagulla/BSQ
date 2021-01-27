/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** capitalize firt letter of each word
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    while (str[i] != 0) {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
            i++;
            str[i] = str[i] - 32;
        }
        else
            i++;
    }
    return (str);
}