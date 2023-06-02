#include "main.h"


/**
 * rot13 - Encodes a string using rot13.
 *
 * @ch: Characters of string to encode
 *
 * Return: Encoded string
 */
char *rot13(char *ch)
{
	int indx1, indx2;
	char leet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encd[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (indx1 = 0; ch[indx1] != '\0'; indx1++)
	{
		for (indx2 = 0; leet[indx2] != '\0'; indx2++)
		{
			if (ch[indx1] == leet[indx2])
			{
				ch[indx1] = encd[indx2];
				break;
			}
		}
	}

	return (ch);
}
