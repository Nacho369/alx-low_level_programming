#include "main.h"


/**
 * main - A program that generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	srand(time(NULL));

	int rand_num = rand();

	printf("%d\n", rand_num);

	return (0);
}
