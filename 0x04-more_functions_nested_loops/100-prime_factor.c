#include "main.h"

int is_prime(int factor);

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
	unsigned long int num = 612852475143;
	unsigned long int factor = 23;

	for ( ; factor < 12057; factor += 2)
	{
		while (num % factor == 0 && num != factor)
		{
			num /= factor;
		}
	}

	printf("%lu\n", num);

	return (0);
}
