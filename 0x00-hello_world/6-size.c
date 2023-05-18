#include <stdio.h>


/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %x byte(s)\n", sizeof(char));
	printf("Size of an int: %x byte(s)\n", sizeof(int));
	printf("Size of a long int: %x byte(s)\n", sizeof(long int));
	printf("Size of a long lont int: %x byte(s)\n", sizeof(long long int));
	printf("Size of a float: %x byte(s)\n", sizeof(float));

	return (0);
}
