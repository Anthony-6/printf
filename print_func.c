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
	int e = va_arg(args, int), count = 0, i;
	unsigned int c;
	char *s;

	if (e < 0)
	{
		count += _putchar('-');
		e *= -1;
	}
	c = e;
	s = malloc(sizeof(char) * 32);
	for (i = 0; c > 0; i++)
	{
		if (c % 2 == 0)
			s[i] = '0';
		else if (c % 2 == 1)
			s[i] = '1';
		c /= 2;
	}
	while (i >= 0)
	{
		count += _putchar(s[i]);
		i--;
	}
	free(s);
	return (count);
}
