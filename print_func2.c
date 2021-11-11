#include "main.h"

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
