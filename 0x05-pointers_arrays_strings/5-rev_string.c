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
	int iter, rev, max, half;
	char start, end;

	for (iter = 0; s[iter] != '\0'; iter++)
		;

	max = 0;
	max = iter - 1;
	half = max / 2;

	for (rev = 0; rev <= half; rev++)
	{
		start = s[max - rev];
		end = s[rev];
		s[rev] = start;
		s[max - rev] = end;
	}
}
