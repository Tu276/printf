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
				int printed = 0;
				int(*print_func)(va_list) = NULL;
				switch (format[i])
				{
					case 'c':
						print_func = print_char;
						break;
					case 's':
						print_func = print_str;
						break;
					case '%':
						print_func = print_percent;
						break;
					case 'd':
					case 'i':
						print_func = print_int;
						break;
					case 'b':
						print_func = print_bin;
						break;
					case 'u':
						print_func = print_unt;
						break;
					case 'o':
						print_func = print_oct;
						break;
					case 'x':
						print_func = print_hexlow;
						break;
					case 'X':
						print_func = print_hex;
						break;
					case 'S':
						print_func = print_Str;
						break;
					case 'R':
						print_func = print_rot13;
						break;
					case 'r':
						print_func = print_rev;
						break;
				}
				if (print_func)
					count += print_func(ap), printed = 1;
				if (!printed && format[i])
					count += _putchar('%'), count += _putchar(format[i]);
				flag = 0;
			}
		}
		va_end(ap);
	}
	else
		return (-1);
	return (count);
}
