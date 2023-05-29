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
	char start, end, half;

	for (iter = 0; s[iter] != '\0'; iter++)
		;

	half = max / 2;

	for (rev = 0; rev <= iter; rev++)
	{
		end = s[rev];
		s[rev] = s[(iter - 1) - rev];
		s[(iter - 1) - rev] = end;
	}
}
