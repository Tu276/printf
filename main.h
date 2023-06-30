#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_str(va_list);
int print_char(va_list);
int print_int(va_list);
int print_bin(va_list);
int print_rot13(va_list);
int print_unsigned_int(va_list);
int print_octal(va_list);
int print_hexlow(va_list);
int print_hex(va_list);
int print_pointer(va_list);
int print_rev(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
    char type;
    int (*f)(va_list);
} format;

#endif
