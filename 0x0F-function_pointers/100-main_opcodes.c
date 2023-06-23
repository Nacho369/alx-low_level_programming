#include "function_pointers.h"


/**
 * main - Prints the opcode of this function
 *
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int n_bytes, i;
	int (*prog)(int, char **) = &main;

	if (ac == 2)
	{
		n_bytes = atoi(av[1]);
		if (n_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < n_bytes; i++)
			printf(
			"%02x%c", (unsigned char)*((char *)prog + i), i < n_bytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);

}
