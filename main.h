#ifndef PRINTF_H
#define PRINTF_H
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct printf_t - print type with corresponding print function
 * @t: format to print type
 * @f: function that print
 */
typedef struct printf_t
{
	char t;
	int (*f)(va_list args);
} printf_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_d_i(va_list args);
int print_b(va_list args);
#endif
