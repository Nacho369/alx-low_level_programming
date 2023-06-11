#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("school.c", "s*c");
	printf("%d\n", r);

	r = wildcmp("school-school.c", "sch*ool.c");
	printf("%d\n", r);
	
	return (0);
}
