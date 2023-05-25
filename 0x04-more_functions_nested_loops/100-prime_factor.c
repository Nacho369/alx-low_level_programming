#include "main.h"

int is_factor(int factor);

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/* unsigned long int num = 612852475143; */
	unsigned long int num = 612852475143;
	unsigned long int factor = 2, check_factor, larg_pf;

	while (factor < 12057)
	{
		if (num % factor == 0)
			num /= factor;
		else
		{
			check_factor = factor + 1;

			while (is_factor(check_factor) != 1)
				check_factor++;

			factor = check_factor;
		}

		larg_pf = factor;
	}

	printf("%lu\n", larg_pf);

	return (0);
}

/**
 * is_factor - Checks if a number is a prime factor
 *
 * @factor: Number to check
 *
 * Return: 1 if true
 * 0 otherwise
 */
int is_factor(int factor)
{
	int iter;

	for (iter = 2; iter < factor; iter++)
	{
		if (factor % iter == 0)
			return (0);
	}

	return (1);
}
