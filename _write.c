#include "main.h"
/**
 * _write - prints a char on stdo
 * @c: char to be printed
 * Return: number of bytes written (1) if success, -1 on error.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
