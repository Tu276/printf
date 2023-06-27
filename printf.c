#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: string
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0, flag = 0;

	if (format)
	{
		va_start(ap, format);
		for (; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
					count += _putchar(format[i]);
				else
					flag = 1;
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					count += _putchar(va_arg(ap, int));
					break;
				case 's':
					count += print_str(va_arg(ap, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					count += print_int(va_arg(ap, int));
					break;
				case 'b':
					count += print_bin(va_arg(ap, unsigned int));
					break;
				case 'u':
					count += print_unt(va_arg(ap, unsigned int));
					break;
				case 'o':
					count += print_oct(va_arg(ap, unsigned int));
					break;
				case 'x':
					count += print_hexlow(va_arg(ap, unsigned int));
					break;
				case 'X':
					count += print_hex(va_arg(ap, unsigned int));
					break;
				case 'S':
					count += print_Str(va_arg(ap, char *));
					break;
				case 'R':
					count += print_rot13(va_arg(ap, char *));
					break;
				case 'r':
					count += print_rev(va_arg(ap, char *));
					break;
				case '\0':
					return (-1);
				default:
					count += _putchar('%');
					count += _putchar(format[i]);
				}
				flag = 0;
			}
		}
		va_end(ap);
	}
	else
	{
		return (-1);
	}
	return (count);
}
