#include "main.h"


/**
 * main - Entry point to the program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (Success)
 * 1 otherwise
 */
int main(int argc, char **argv)
{
	int iter = 0, count = 0, value;
	int reg[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	for (;;)
	{
		if (value == 0)
			break;

		if (value >= reg[iter])
		{
			count += (value / reg[iter]);
			value = value % reg[iter];
		}

		iter++;
	}

	printf("%d\n", count);

	return (0);
}
