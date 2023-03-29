#include "main.h"

/**
 * print_char - prints a char
 * @args: arguments list
 * Return: length (1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_write(c));
}

/**
 * print_string - prints a string
 * @args: arguments list
 * Return: strings length
 */
int print_string(va_list args)
{
	int a = 0;
	char *string;

	string = va_arg(args, char*);

	if (string == NULL)
		string = "(null)";

	while (string[a] != '\0')
	{
		_write(string[a]);
		a++;
	}
	return (a);
}

/**
 * print_percent - prints a percent sign
 * @args: arguments list, but it won't be used
 * Return: length (1)
 */
int print_percent(__attribute__((unused)) va_list args)
{
	char c = '%';

	return (_write(c));
}
