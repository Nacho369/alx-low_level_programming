#include "main.h"


/**
 * leet - Encodes a string into 1337.
 *
 * @ch: String character to encode
 *
 * Return: Pointer to encoded string
 */
char *leet(char *ch)
{
	int iter, iter2;
	char leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encd[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int len = sizeof(leet) / sizeof(leet[0]);

	for (iter = 0; ch[iter] != '\0'; iter++)
	{
		for (iter2 = 0; iter2 < len; iter2++)
		{
			if (ch[iter] == leet[iter2])
				ch[iter] = encd[iter2];
		}
	}

	return (ch);
}
