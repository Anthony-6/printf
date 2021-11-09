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
	char *m;
	int i, n, count = 0;
	char *str = va_arg(args, char *);
	m = ("(null)");
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			count++;
		}
	}
	else if (str == NULL)
		for (n = 0; m[n] != '\0'; n++)
		{
			_putchar(m[n]);
			count++;
		}
	return (count);
}
/**
 * print_d_i - prints an integer
 * @args: integer to print
 * Return: number of characters
 */

int print_d_i(va_list args)
{
	int i = va_arg(args, int), div = 1, count = 0;

	if (i < 0)
	{
		_putchar('-');
		i *= -1;
		count += 1;
	}
	while (i / (div * 10) >= 1)
		div *= 10;
	while (div >= 1)
	{
		_putchar((i / div) + '0');
		i = i % div;
		div /= 10;
		count++;
	}
	return (count);
}
