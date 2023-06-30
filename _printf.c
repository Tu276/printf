/**
 * _printf - Printf function
 * print_buffer - Prints the contents of the buffer if it exists
 * Return: Printed chars.
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 **/
#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int buff_ind = 0;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; *format != '\0'; ++format)
	{
		if (*format != '%')
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
				printed_chars += buff_ind;
			}
			else
			{
				printed_chars++;
			}
		}
		else
		{
			print_buffer(buffer, &buff_ind);

			int flags = get_flags(format, &format);
			int width = get_width(format, &format, args);
			int precision = get_precision(format, &format, args);
			int size = get_size(format, &format);

			int printed = handle_print(format, &format, args, buffer,
									   flags, width, precision, size);

			if (printed == -1)
			{
				va_end(args);
				return (-1);
			}

			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);
	va_end(args);

	return (printed_chars);
}
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, buffer, *buff_ind);
		*buff_ind = 0;
	}
}
