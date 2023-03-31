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
		/*printf's man says that in error returns a negative value*/
		return (-1);

	/*at this point, is known that format is not NULL*/
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			/*only looking at the next argument, but not moving*/
			if (format[x + 1] != '\0')
			{
				/*goes to get_sp function, executes and stores return in y*/
				y = get_sp(args, format[x + 1]);
				count = count + y;
				/*moves to next argument, the one that was being looked*/
				x++;
			}
			x++;
		}
		/*writes while format[x] is not '%' and stores return in z*/
		z = _write(format[x]);
		count = count + z;
		x++;
	}
	va_end(args);
	return (count);
}
