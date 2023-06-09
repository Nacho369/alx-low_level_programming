#include "main.h"


/**
 * main - Entry point to the program which prints all arguments it receives.
 *
 * @argc: Arguments count
 * @argv: Argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int indx;

	for (indx = 0; indx < argc; indx++)
	{
		printf("%s\n", argv[indx]);
	}

	return (0);
}
