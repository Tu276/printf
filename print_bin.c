#include "main.h"
/**
 * print_bin - prints binary of a number
 * @n: number to be converted
 *
 * Return: The number of characters printed/bytes
 */
int print_bin(unsigned int n)
{
    int count = 0;

    if (n)
    {
        if (n >= 1)
        {
            count += print_bin(n / 2);
            count += _putchar((n % 2) + '0');
        }
        else
        {
            return (-1);
        }
    }
    return (count);
}