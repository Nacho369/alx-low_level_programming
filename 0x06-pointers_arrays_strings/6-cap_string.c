#include "main.h"


/**
 * cap_string - Capitalizes the first letter of all words of a
 * string that the previous char is either space, tab, newline ',',
 * ';', '.', '!', '?', '"', '(', ')', '{', and '}'
 *
 * @str: String to capitalize
 *
 * Return: Pointer to capitalized string
 */
char *cap_string(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		while (!(str[iter] >= 97 && str[iter] <= 122))
			iter++;

		if (str[iter - 1] == 32 || str[iter - 1] == 9 ||
		str[iter - 1] == 10 || str[iter - 1] == 44 ||
		str[iter - 1] == 59 || str[iter - 1] == 46 ||
		str[iter - 1] == 33 || str[iter - 1] == 63 ||
		str[iter - 1] == 34 || str[iter - 1] == 40 ||
		str[iter - 1] == 41 || str[iter - 1] == 123 ||
		str[iter - 1] == 125)
			str[iter] = str[iter] - 32;
	}

	return (str);
}
