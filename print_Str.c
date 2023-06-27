#include "main.h"
/**
 * print_Str - prints string but replaces special
 * and non-printable characters are replaced by their hex ASCII code
 * @c: pointer to string
 *
 * Return: length of string
 */
int print_Str(char *c)
{
    int i;

    for (i = 0; *(c + i); i++)
    {
        if ((*(c + i) >= 0 && *(c + i) <= 32) || (*(c + i) >= 127))
        {
            _putchar('\\');
            _putchar('x');
            if (*(c + i) <= 16)
                _putchar('0');
            i += print_hex(*(c + i));
        }
        else
        {
            _putchar(*(c + i));
        }
    }
    return (i);
}