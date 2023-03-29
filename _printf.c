#include "main.h"
/**
 * _printf - prints depending on the format passed
 * @format: the format specified
 * Return: number of characters printed, or -1 if error
 */

int _printf(const char *format, ...)
{
	int count = 0, x = 0, y = 0;
	va_list args;

	option_t changes[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', print_null}
	};

	va_start(args, format);
	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	while (format[x] != '\0')
	{
		if (format[x] != '%')
		{
			_write(format[x]);
			x++;
			count++; /* ver si va aqui o en el loop while */
		}
		if (format[x + 1] != '\0')
		{
			while (changes[y].index != '\0')
			{
				if (changes[y].index == format[x + 1])
				{
					changes[y].function(args);
				}
				y++;
			}
			count++;
			/* ejecutar func 4 */
		}
		_write(format[x]);
	}
	va_end(args); /* ver si va o no */
	return (count);
}
