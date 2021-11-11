#include "main.h"

/**
 * print_rot13 - Prints a string in rot13
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
