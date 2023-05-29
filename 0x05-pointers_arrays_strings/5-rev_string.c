#include "main.h"


/**
 * rev_string - A function that reverse a string
 *
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int iter, rev, max;

	for (iter = 0; s[iter] != '\0'; iter++)
		;

	max = 0;

	for (rev = iter; max != iter; rev--)
	{
		s[max] = s[rev];
		max++;
	}
}
