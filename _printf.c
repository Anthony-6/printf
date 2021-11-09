#include "main.h"

/**
 * _printf - function that produces output according to a format
 *@format: character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
	printf_t type[] = {
		{'c', print_c},
		{'s', print_str},
		{'d', print_d_i},
		{'i', print_d_i}
	};
	int count, i, j;
	va_list args;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count += 1;
			}
		for (j = 0; j < 4; j++) /*navigate in the struc*/
		{
			if (type[j].t == format[i + 1])
			{
				count += (type[j].f(args));
			}
		}
		i++;
		}
	}
	va_end(args);
	return (count);
}
