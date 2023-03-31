#include "main.h"

/**
 * _printf - prints depending on the format passed
 * @format: the format specified
 * Return: number of characters printed, or -1 if error
 */
int _printf(const char *format, ...)
{
	int count = 0, x = 0;
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
			if (format[x + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				/*goes to get_sp function, executes and stores return in y*/
				count += get_sp(args, format[x + 1]);
				/*moves to next argument, the one that was being looked*/
				x++;
			}
		}
		else
			/*writes while format[x] is not '%' and stores return in z*/
			count += _write(format[x]);
		x++;
	}
	va_end(args);
	return (count);
}
