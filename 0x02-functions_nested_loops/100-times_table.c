#include "main.h"

void print_nums(int prod, int f_d, int s_d, int l_d);
void print_seperator(int iter, int prod);

/**
 * print_times_table - Prints the n times table starting
 * with 0
 *
 * @n: n times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int num = n;
	int val, prod, tens;
	int iter, f_dig, m_dig, l_dig;

	if (!(num > 15 || num < 0))
	{
		for (val = 0; val < (num + 1); val++)
		{
			for (iter = 0; iter < (num + 1); iter++)
			{
				prod = val * iter;
				l_dig = prod % 10;

				if (prod < 100)
					f_dig = prod / 10;
				else if (prod > 99)
				{
					tens = prod / 10;
					m_dig = tens % 10;
					f_dig = tens / 10;
				}

				print_seperator(iter, prod);

				print_nums(prod, f_dig, m_dig, l_dig);
			}

			_putchar(10);
		}
	}
}

/**
 * print_nums - Prints the digit
 *
 * @prod: Products of loop digits
 * @f_d: First digit character
 * @m_d: Middle digit character
 * @l_d: Last digit character
 *
 * Return: void
 */
void print_nums(int prod, int f_d, int m_d, int l_d)
{
	if (prod < 10)
		_putchar(48 + prod);
	else if (prod > 9 && prod < 100)
	{
		_putchar(48 + f_d);
		_putchar(48 + l_d);
	}
	else
	{
		_putchar(48 + f_d);
		_putchar(48 + m_d);
		_putchar(48 + l_d);
	}
}

/**
 * print_seperator - Prints the commas and space where
 * neccesary
 *
 * @iter: Second iteration value
 * @prod: Product of loop digit
 *
 * Return: void
 */
void print_seperator(int iter, int prod)
{
	if (iter != 0)
	{
		_putchar(44);
		_putchar(32);

		if (prod < 10)
		{
			_putchar(32);
			_putchar(32);
		}
		else if (prod > 9 && prod < 100)
			_putchar(32);
	}
}
