#ifndef PRINTF_H
#define PRINTF_H

/* Function prototypes */
int _printf(const char *format, ...);

/*function to print strings */
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *c);
int print_int(int num);
int print_Str(char *c);
int print_bin(unsigned int num);
int print_hex(unsigned int num);
int print_oct(unsigned int num);
int print_unt(unsigned int num);
int print_hexlow(unsigned int num);
int print_bin(unsigned int num);
int print_ptr(int num);
int print_rot13(char *c);
int print_rev(char *c);

/* Function pointer declaration */
typedef int (*print_func_ptr)(va_list);

#endif
