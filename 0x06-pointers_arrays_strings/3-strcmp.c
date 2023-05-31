#include "main.h"


/**
 * _strcmp - Compares two string
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0: The strings are equal
 * -1: @str1 is less than @str2
 *  1: @str1 is greater than @str2
 */
int _strcmp(char *s1, char *s2)
{
	int iter, len, ret = 0;

	for (iter = 0; s1[iter] != '\0'; iter++)
		;

	len = iter - 1;

	for (iter = 0; s2[iter] != '\0'; iter++)
		;

	len += (iter - 1);

	for (iter = 0; iter < len && (s1[iter] != '\0' &&
	s1[iter] != '\0'); iter++)
	{
		if (s1[iter] == s2[iter])
			continue;
		else if (s1[iter] < s2[iter])
		{
			ret = s1[iter] - s2[iter];
			return (ret);
		}
		else
		{
			ret = s1[iter] - s2[iter];
			return (ret);
		}
	}

	ret = s1[iter] - s2[iter];

	return (ret);
}
