#include "main.h"


/**
 * *string_toupper - Cchanges all lowercase letters of a string
 * to uppercase.
 *
 * @ch: Pointer to string to change to uppercase
 *
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *ch)
{
	int iter;

	for (iter = 0; ch[iter] != '\0'; iter++)
	{
		if (ch[iter] > 96 && ch[iter] < 123)
			ch[iter] = ch[iter] - 32;
	}

	return (ch);
}
