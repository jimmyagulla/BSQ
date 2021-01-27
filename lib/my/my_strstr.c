/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** str in str
*/

void my_putchar(char c);

int my_strlen(char const *str);

int my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int size_to_find = my_strlen(to_find);
    int r = 0;

    while (str[i] != 0 && str[i] != to_find[r])
        i++;
    while (str[i] == to_find[r] && to_find[r] != 0 && str[i] != 0) {
        i++;
        r++;
    }
    if (r == size_to_find)
        i = i - size_to_find;
    while (str[i] != 0 && r == size_to_find) {
        my_putchar(str[i]);
        i++;
    }
    return (1);
}

int main(void)
{
    char *str = "Bonjour";
    char *to_find = "jour";
    my_strstr(str, to_find);
    return (0);
}