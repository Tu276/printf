#include "main.h"
/**
 * print_unt - print unsigned integers
 * @n: int
 *
 * Return: int
 */
int print_unt(unsigned int n)
{
    unsigned int a = n;
    int i = 0;

    if (n <= 0)
        return (-1);
    if (n)
    {
        if ((a / 10) > 0)
            i += print_unt(a / 10);
        _putchar((a % 10) + '0');
        i++;
    }
    return (i);
}