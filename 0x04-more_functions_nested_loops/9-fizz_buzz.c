#include "main.h"
#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: Prints the numbers from 1 to 100, followed by a new
 * line. But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For numbers which
 * are multiples of both three and five print FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int iter;

	for (iter = 1; iter < 101; iter++)
	{
		if ((iter % 3 == 0) && (iter % 5 == 0))
			printf("FizzBuzz");
		else if (iter % 3 == 0)
			printf("Fizz");
		else if (iter % 5 == 0)
			printf("Buzz");
		else
			printf("%d", iter);

		if (iter != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
