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
	/*declare an array of structures to associate each specifier with a function*/
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
		/* index[0] because index is a pointer, so it can be treated as an array */
		if (changes[x].index[0] == letter)
		{
			/*call the corresponding function, executes and stores the return in count*/
			count = (changes[x].function)(args);
			return (count);
		}
		x++;
	}

	if (letter != '\0')
	{
		/* the letter passed is not a specifier */
		_write('%');
		_write(letter);
		return (2);
	}
	_write('%');
	return (1);
}
