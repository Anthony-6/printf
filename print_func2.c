#include "main.h"

/**
 * print_r - print a string in reverse
 * @args: string to print in reverse
 * Return: number of characters
 */

int print_r(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, count = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		i++;
	i--;
	for (; i >= 0; i--)
		count += _putchar(str[i]);
	return (count);
}

/**
 * print_rot13 - prints a string in rot13
 * @args: string to print
 * Return: number of character
 */

int print_rot13(va_list args)
{
	int i = 0, j, count = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(NULL)";
	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
				break;
		}
		if (s[i] == a[j])
			count += _putchar(b[j]);
		else
			count += _putchar(s[i]);
		i++;
	}
	return (count);
}
