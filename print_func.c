
#include "main.h"

/**
 * print_c - prints a string
 * @args: character to print
 * Return: number of characters (1)
 */

int print_c(va_list args)
{
	char e = va_arg(args, int);

	_putchar(e);
	return (1);
}
/**
 * print_str - prints a string
 * @args: string to print
 * Return: number of characters
 */

int print_str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	return (i);
}