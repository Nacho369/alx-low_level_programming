#include "main.h"
#include <stdio.h>


/**
 * main - Entry point to the program
 *
 * Description: Prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int max = 1024, num;
	int sum = 0;

	for (num = 0; num < max; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
