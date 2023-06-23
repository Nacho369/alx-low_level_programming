#include "variadic_functions.h"


/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: Is the string to be printed between the strings
 * @n: Is the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	char *str;
	va_list args;

	va_start(args, n);

	for (iter = 0; iter < n; iter++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (iter != (n - 1) && separator != NULL)
			printf("%s%s", str, separator);
	}

	va_end(args);
	printf("\n");
}
