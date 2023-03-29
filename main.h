#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

typedef struct option
{
	char *index;
	int(*function)(va_list);
}option_t;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_null(va_list args);
int _write(char c);

#endif
