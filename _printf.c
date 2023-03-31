#include "main.h"
/**
 * _printf - prints depending on the format passed
 * @format: the format specified
 * Return: number of characters printed, or -1 if error
 */

int _printf(const char *format, ...)
{
	int count = 0, x = 0, y = 0, z = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			if (format[x + 1] != '\0')
			{
				y = get_sp(args, format[x + 1]);
				count = count + y;
				x++;
			}
			x++;
		}
		z = _write(format[x]); /* chequear si al guardarlo ya no printea */
		count = count + z;
		x++;
	}
	va_end(args);
	return (count);
}
