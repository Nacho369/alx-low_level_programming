#include "main.h"


/**
 * _strstr - A function that locates a substring.
 *
 * @haystack: Pointer to the string to search for sub string in
 * @needle: Pointer to sub string to search for
 *
 * Return: Pointer to the first occurence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int indx, indx2 = 0, inc = 0;

	if (needle[indx2] == '\0')
		return (haystack);

	for (indx = 0; haystack[indx] != '\0'; indx++)
	{
		if (haystack[indx] == needle[indx2])
		{
			while (needle[indx2] != '\0' &&
			haystack[indx] == needle[indx2])
			{
				indx++;
				indx2++;
				inc++;

				if (needle[indx2] == '\0')
					return (haystack + (indx - inc));
			}
		}
	}

	return (NULL);

}
