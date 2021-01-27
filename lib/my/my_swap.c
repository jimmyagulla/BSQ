/*
** EPITECH PROJECT, 2020
** my_swap.c task01
** File description:
** A program that swaps the content of two integers
*/

int my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}