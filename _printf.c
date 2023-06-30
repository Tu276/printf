#include "main.h"

/**
 * _printf - Produces output
 * @format: . The format string
 * is composed of z directiveso or m
 *
 * Return: The number of characters printed
 * the null byte used  output to strings)
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
