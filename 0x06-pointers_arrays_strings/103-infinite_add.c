#include "main.h"

void add_digits(char *n1, char *n2, char *r, int size_r, int temp, int ind1, int ind2, int tens);

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
	int ind1, ind2, temp = 0, tens = 0;

	/* Find the Last index of First and Second Number */
	for (ind1 = 0; n1[ind1] != '\0'; ind1++)
		;
	ind1--;
	for (ind2 = 0; n2[ind2] != '\0'; ind2++)
		;
	ind2--;

	if (size_r - 2 < 0)
		return (0);

	while (ind1 >= 0 && ind2 >= 0)
		add_digits(n1, n2, r, size_r, temp, ind1, ind2, tens);

	if (ind1 > ind2)
	{
		while (ind1 >= 0)
		{
			if (size_r - 2 < 0)
				return (0);

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
			if (size_r - 2 < 0)
				return (0);

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
	else if (tens > 0)
	{
		r[size_r - 2] = tens + 48;
		tens = 0;
	}
	return (r);
}

/**
 * add_digits - Adds the digit
 *
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * @temp: A variable to store the value of the result
 * @ind1: Index 1
 * @ind2:Index 2
 * @tens: The tens value of temp
 *
 * Return: void
 */
void add_digits(char *n1, char *n2, char *r, int size_r, int temp, int ind1, int ind2, int tens)
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
