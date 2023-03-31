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
	int count, num, abso;

	count = 0;
	num = va_arg(args, int);
	abso = num;

	if (num < 0)
	{
		abso = abso * -1;
		_write('-');
		count++;
	}

	while (abso >= 10)
	{
		abso = abso / 10;
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
	unsigned int uns_num; /* chequear si no conviene cambiarle el nombre */

	uns_num = num;
	if (num < 0)
		uns_num = uns_num * -1;

	if (uns_num >= 10)
		print_int_rec(uns_num / 10);
	_write((uns_num % 10) + '0');
}
