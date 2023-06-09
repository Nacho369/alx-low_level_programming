#include "main.h"


/**
 * main - Entry point to the program that multiplies two numbers.
 *
 * @argc: Arguments count
 * @argv: Argument vector
 *
 * Return: 0 (Success)
 * 1 otherwise
 */
int main(int argc, char **argv)
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
