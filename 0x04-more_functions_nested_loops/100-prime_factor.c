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
	/* long int num = 612852475143; */
	long int num = 24;
	long int factor = 2, larg_pf = 0;
	long int check_factor;

	while (factor < num)
	{
		if (num % factor == 0)
		{
			num /= factor;
			larg_pf = factor;
			printf("Each factor: %ld\n", factor);
		}
		else
		{
			check_factor = factor + 1;

			while (!(is_factor(check_factor)))
				check_factor++;
		}

		factor = check_factor;
	}

	printf("%ld\n", larg_pf);

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
