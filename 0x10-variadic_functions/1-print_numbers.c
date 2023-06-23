#include "variadic_functions.h"


/**
 * print_numbers - Prints numbers followes by a new line
 *
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	int val;
	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		val = va_arg(args, unsigned int);

		if ((iter != (n - 1)) && separator != NULL)
			printf("%d%s", val, separator);
		else
			printf("%d", val);
	}

	printf("\n");

	va_end(args);
}
