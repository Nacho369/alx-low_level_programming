#include "main.h"


/**
 * main - Entry point to the program that adds positive numbers.
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int iter, num, sum = 0;

	for (iter = 1; iter < argc; iter++)
	{
		for (num = 0; argv[iter][num] != '\0'; num++)
		{
			if (argv[iter][num] < 48 || argv[iter][num] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[iter]);
	}

	printf("%d\n", sum);

	return (0);
}
