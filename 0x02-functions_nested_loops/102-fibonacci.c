#include <stdio.h>
#include "main.h"


/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: void
 */
int main(void)
{
	int iter, max = 50;
	long int curr = 2, next;
	long int sum = 1;

	for (iter = 0; iter < max; iter++)
	{
		if (sum != 1)
			printf(", ");

		printf("%ld", sum);

		next = sum + curr;
		sum = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
