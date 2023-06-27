#include "main.h"
/**
 * print_hexlow - print the hexadecimal equivalent in lowercase
 * @n: int
 *
 * Return: number of bytes
 */
int print_hexlow(unsigned int n)
{
    int count = 0;

    if (n)
    {
        if (n >= 1)
        {
            count += print_hexlow(n / 16);
            if ((n % 16) > 9 && (n % 16) < 16)
            {
                count += _putchar((n % 16) + 87);
            }
            else
            {
                count += _putchar((n % 16) + '0');
            }
        }
        else
        {
            return (-1);
        }
    }
    return (count);
}