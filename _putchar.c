#include <unistd.h>

/**
 * _putchar - write char c to the stdout
 * @c: the char
 * Return: 1 and -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
