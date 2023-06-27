#include "main.h"
/**
 * print_rev - prints string in reverse
 * @c: pointer
 * Return: count of printed char
 */
int print_rev(char *c)
{
    int n = 0;
    int j;

    if (!c)
        return (-1);

    while (*(c + n) != '\0')
    {
        n++;
    }

    for (j = n - 1; j >= 0; j--)
    {
        _putchar(*(c + j));
    }

    return (n);
}
