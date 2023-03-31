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

/**
 * print_int - prints an integer
 * @args: arguments list
 * Return: length
 */
int print_int(va_list args)
{
	int count, num, abs;

	count = 0;
	num = va_arg(args, int);

	if (num < 0)
		abs = -num;
	abs = num;

	if (num < 0)
	{
		_write('-');
		count++;
	}

	while (abs >= 10)
	{
		abs = abs / 10;
		count++;
	}

	print_int_rec(num);
	return (count);
}

/**
 * print_int_rec - recursive function called by print_int
 * @num: number to be printed
 */
void print_int_rec(int num)
{
	unsigned int abs; /* chequear si no conviene cambiarle el nombre */

	if (num < 0)
		abs = -num;
	abs = num;

	if (abs >= 10)
		print_int_rec(abs / 10);
	_write((abs % 10) + '0');
}
