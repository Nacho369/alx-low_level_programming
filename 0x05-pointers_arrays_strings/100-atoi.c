#include "main.h"


/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: String to check for conversion
 *
 * Return: Integer from string
 */
int _atoi(char *s)
{
	int iter, symb = 1;
	unsigned int res = 0;

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		if (s[iter] == '-')
			symb *= -1;

		if (s[iter] > 47 && s[iter] < 58)
			res = (res * 10) + (s[iter] - '0');

		if ((!(s[iter] > 47 && s[iter] < 58)) && (s[iter - 1] > 47 && s[iter - 1] < 58))
			break;
	}

	res *= symb;

	return (res);
}
