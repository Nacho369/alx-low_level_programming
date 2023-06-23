#include "variadic_functions.h"


/**
 * sum_them_all - Return the sum of all its parametera
 *
 * @n: Number of parameters to accept
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int indx;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (indx = 0; indx < n; indx++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
