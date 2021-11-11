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
 * print_s - prints a string
 * @args: string to print
 * Return: number of characters
 */

int print_s(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		count+= _putchar(str[i]);
	return (count);
}

/**
 * print_percent - prints a string
 * @args:  to print
 * Return: number of characters
 */

int print_percent(va_list args)
{
	(void) args;
	_putchar('%');
	return (1);
}

/**
 * print_d_i - prints an integer
 * @args: integer to print
 * Return: number of characters
 */

int print_d_i(va_list args)
{
	long int j = va_arg(args, int), div = 1;
	int count = 0;
	unsigned int i;

	if (j < 0)
	{
		count += _putchar('-');
		j *= -1;
	}
	i = j;
	while (i / (div * 10) >= 1) /*get bigest divider(multiple of 10) of i*/
		div *= 10;
	while (div >= 1)
	{
		count += _putchar((i / div) + '0'); /*print first figure of i*/
		i = i % div;  /*i become the rest of the divison*/
		div /= 10;
	}
	return (count);
}

/**
 * print_b - print binary code from an unsigned integer
 * @args: integer to convert to binary and print
 * Return: number of characters
 */

int print_b(va_list args)
{
	unsigned int c = va_arg(args, unsigned int);
	int count = 0, i = 0;
	unsigned int tab[31];

	if (!c)
	{
		count += _putchar('0');
	}
	else
	{
		for (i = 0; c > 0; i++)
		{
			tab[i] = (c % 2);
			c /= 2;
		}
		i--;
		while (i >= 0)
		{
			count += _putchar(tab[i] + '0');
			i--;
		}
	}
	return (count);
}
