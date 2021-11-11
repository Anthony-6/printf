#include "main.h"

/**
 * print_rot13 - Prints a string in rot13
 * @arg: string to print
 * Return: number of character
 */

int print_rot13(va_list arg)
{
	int i = 0, j, count = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				count += _putchar(b[j]);
				break;
			}
			else
			{
				count += _putchar(s[i]);
				break;
			}
		}
		i++;
	}
	return (count);
}
