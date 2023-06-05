#include "main.h"


/**
 * infinite_add -  Adds two numbers
 *
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result of the addition
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result of the addition
 * 0 if the result cannot be stores in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ind1, ind2, temp, len, tens = 0;

	/* Find the Last index of First and Second Number */
	for (ind1 = 0; n1[ind1] != '\0'; ind1++)
		;
	ind1--; /* Get the last index number */

	for (ind2 = 0; n2[ind2] != '\0'; ind2++)
		;
	ind2--; /* Get the last index number */

	if (ind1 > ind2)
		len = ind1 + 1; /* Includes null terminator space */
	else
		len = ind2 + 1; /* Includes null terminator space */

	if (len + 1 > size_r) /* Adding +1 for the addition overflow */
		return (0);

	r[size_r - 1] = '\0';

	while (ind1 >= 0 && ind2 >= 0)
	{
		temp = tens + (n1[ind1] - 48) + (n2[ind2] - 48);
		
		if (temp > 9)
		{
			tens = temp / 10;
			r[size_r - 2] = (temp % 10) + 48;
		}
		else
		{
			r[size_r - 2] = temp + 48;
			tens = 0;
		}
		size_r--;
		ind1--;
		ind2--;
	}

	if (ind1 > ind2)
	{
		while (ind1 >= 0)
		{
			temp = tens + (n1[ind1] - 48);

			if (temp > 9)
			{
				tens = temp / 10;
				r[size_r - 2] = (temp % 10) + 48;
			}
			else
			{
				r[size_r - 2] = temp + 48;
				tens = 0;
			}
			size_r--;
			ind1--;
		}
	}
	else
	{
		while (ind2 >= 0)
		{
			temp = tens + (n2[ind2] - 48);
			if (temp > 9)
			{
				tens = temp / 10;
				r[size_r - 2] = (temp % 10) + 48;
			}
			else
			{
				r[size_r - 2] = temp + 48;
				tens = 0;
			}
			size_r--;
			ind2--;
		}
	}
	if (tens > 0 && size_r - 2 < 0)
		return (0);
	else
	{
		r[size_r - 2] = tens + 48;
		tens = 0;
	}

	return (r);
}
