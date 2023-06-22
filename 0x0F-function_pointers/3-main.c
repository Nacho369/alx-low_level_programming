#include "3-calc.h"


/**
 * main - A program thay performs simple operations
 *
 * @ac: Arguments count
 * @av: Arguments vector
 *
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int res, num1, num2;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if (av[2][0] != '+' && av[2][0] != '-' &&
	av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (av[2][1] == '\0')
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		res = (*get_op_func(av[2]))(num1, num2);
		printf("%d\n", res);

	} else
	{

		printf("Error\n");
		exit(99);
	}

	return (0);
}
