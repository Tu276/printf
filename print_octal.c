#include "main.h"
/**
 * print_oct - converts decimal to octal and prints
 * @n: int
 *
 * Return: bytes
 */
int print_oct(unsigned int n)
{
    int count = 0;

    if (n)
    {
        if (n >= 1)
        {
            count += print_oct(n / 8);
            count += _putchar((n % 8) + '0');
        }
        else
        {
            return (-1);
        }
    }
    return (count);
}