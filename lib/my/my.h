/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header for libs
*/

#ifndef __MY_H__
#define __MY_H__

typedef struct values_s {
    int fd;
    int rows;
    char *file_content;
    char *nb_lines;
} values_t;

typedef struct pos_s {
    int x;
    int y;
    int biggest_sq_x;
    int biggest_sq_y;
    int max_size_f;
    int size_actual_sq;
    int nb_lines;
} pos_t;

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup (int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr (char *str);
int my_showmem (char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array (int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat (char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest , char const *src);
int my_str_isalpha(char const *str);
int my_str_islower (char const *str);
int my_str_isnum (char const *str);
int my_str_isprintable (char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase (char *str);
char *my_strncat (char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest , char const *src, int n);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strchr(char *base, int i);
int my_open(char const *filepath);

int verify_first_line(values_t values);
int verify_line_chars(char **arr);
int error_handling(char **arr, values_t values);
int verify_read(int retour_of_read, struct stat bytes);
char *get_map(char const *filepath);
int is_next_separator(char const *str, char const *separator, int index);
int get_nb_words(const char *str, const char *separator);
int get_word_len(char const *str, char const *separators, int index, int count_i);
char **my_str_to_word_array_delim(const char *str, const char *separators);
void set_biggest_sq_pos(pos_t *pos);
void update_structs(pos_t *pos, char **arr);
void word_loop(pos_t *pos, char **arr);
int can_square_grow_by_one(char **arr, pos_t *pos);
int verify_nb_lines(char **arr);

#endif