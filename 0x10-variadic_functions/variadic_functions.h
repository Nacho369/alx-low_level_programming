#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>


/**
 * struct format_type - A new struct type definin
 * a printer.
 *
 * @ft: A symbol representing a data type.
 * @func_p: A function pointer to a function that
 * prints a data type corresponding to symbol (ft).
 */
typedef struct format_type
{
	char ft;
	void (*func_type)(va_list args);
} f_type;

/* Prototypes */
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
