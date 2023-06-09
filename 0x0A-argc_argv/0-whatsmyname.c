#include "main.h"


/**
 * main - A program that prints it's name followed by a new line
 *
 * @argc: Argument counts
 * @argv: Arguments vector
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
