#include <stdio.h>
#include "main.h"


/**
 * main - Entry point of the program
 *
 * Description: A program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int iter;
	long int val = 1, curr = 2;
	long int next, sum = 0;

	for (iter = 0; val < 4000000; iter++)
	{
		if ((val % 2) == 0)
			sum += val;

		next = val + curr;
		val = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
