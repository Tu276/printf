#include "main.h"
/**
 * print_hex - print hexadecimal equivalent of decimal
 * @n: number to be converted
 *
 * Return: number of bytes
 */
int print_hex(unsigned int n)
{
    int count = 0;

    if (n)
    {
        if (n >= 1)
        {
            count += print_hex(n / 16);
            if ((n % 16) > 9 && (n % 16) < 16)
            {
                count += _putchar((n % 16) + 55);
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