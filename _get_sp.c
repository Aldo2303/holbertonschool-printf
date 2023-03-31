#include "main.h"
/**
 * get_sp - gets the function corresponding to the specifier
 * @args: arguments list
 * @letter: letter candidate to be a specifier
 * Return: length
 */
int get_sp(va_list args, char letter)
{
	int x = 0, count = 0;

	option_t changes[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{'\0', NULL}
	};

	while (changes[x].index != NULL && letter != '\0')
	{
		if (changes[x].index[0] == letter) /* entrada 0 de index pq es un pointer */
		{
			count = (changes[x].function)(args);
			return (count);
		}
		x++;
	}

	if (letter != '\0')
	{
		_write('%');
		_write(letter);
		return (2);
	}
	_write('%');
	return (1);
}
