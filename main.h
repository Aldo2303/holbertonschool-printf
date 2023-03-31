#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct option - associates index and a function
 * @index: candidate to be a specifier
 * @function: function associated to that specifier
 */
typedef struct option
{
	char *index;
	int (*function)(va_list);
} option_t;

/* functions prototype */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
void print_int_rec(int num);
int get_sp(va_list args, char letter);
int _write(char c);

#endif
