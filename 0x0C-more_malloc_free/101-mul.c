#include "main.h"

int _isdigit(int c);


/**
 * main - A program that multiplies two positive numbers.
 *
 * @ac: Argument count
 * @av: Arhument vector
 *
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int indx1, indx2;
	long int num1, num2, res = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);

	for (indx1 = 1; indx1 < ac; indx1++)
	{
		for (indx2 = 0; av[indx1][indx2] != '\0'; indx2++)
		{
			if (!(_isdigit(av[indx1][indx2])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	res = num1 * num2;
	printf("%lu\n", res);

	return (0);
}


/**
 * _isdigit - Checks for a digit (0 through 9)
 *
 * @c: Digir to check
 *
 * Return: 1 if @c is a digit
 * 0 if otherwise
 */
int _isdigit(int c)
{
	int dig = c;

	if (dig > 47 && dig < 58)
		return (1);

	return (0);
}
