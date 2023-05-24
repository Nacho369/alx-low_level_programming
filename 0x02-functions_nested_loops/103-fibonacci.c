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
	long int sum = 1, curr = 2;
	long int next;

	for (iter = 0; sum < 4000000; iter++)
	{
		if ((sum % 2) == 0)
			sum += sum;

		next = sum + curr;
		sum = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
