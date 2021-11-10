#include "main.h"

/**
 * _printf - function that produces output according to a format
 *@format: character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
printf_t type[] = {{'c', print_c}, {'s', print_str}, {'%', print_percent},
		   {'d', print_d_i}, {'i', print_d_i}, {'b', print_b}};
int count = 0, i, j, t = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] != '%')
			count += _putchar(format[i]);
		else if (format[i] == '%')
		{
			t = 0;
			for (j = 0; j < 6; j++) /*navigate in the struc*/
			{
				if (type[j].t == format[i + 1])
				{
					count += (type[j].f(args));
					t = 1;
					i++;
					break;
				}
			}
			if (t == 0)
				count += _putchar('%');
		}
	}
	va_end(args);
	return (count);
}
