#include <stdio.h>


/**
 * main - A program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
