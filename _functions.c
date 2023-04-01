#include "main.h"

/**
 * print_char - prints a char
 * @args: arguments list
 * Return: length (1)
 */
int print_char(va_list args)
{
	/* Keeps a char from the va_list and stores it in char c*/
	char c = va_arg(args, int);

	/* Returns the length and writes */
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
	/* define a char pointer to store the string */
	char *string;

	string = va_arg(args, char*);

	if (string == NULL)
		string = "(null)";

	while (string[a] != '\0')
	{
		_write(string[a]);
		a++;
	}
	/* at this point, a stores the length of string */
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
	int count, num;
	unsigned int abso;

	count = 1;
	num = va_arg(args, int);
	abso = num;

	if (num < 0)
	{
		/* so it doesn't store the '-' sign */
		abso = num * -1;
		_write('-');
		count++;
	}
	/* num >= 10 so it can be divided by 10 */
	while (abso >= 10)
	{
		abso = abso / 10;
		count++;
	}
	/* call the recursive function */
	print_int_rec(num);
	return (count);
}

/**
 * print_int_rec - recursive function called by print_int
 * @num: number to be printed
 */
void print_int_rec(int num)
{
	/* unsigned to have more space available to store */
	unsigned int uns_num;

	uns_num = num;
	if (num < 0)
		uns_num = num * -1;

	if (uns_num >= 10)
		/* calls recursively to itself */
		print_int_rec(uns_num / 10);
	/* writes the last digit, that's why it prints forward */
	_write((uns_num % 10) + '0');
}
