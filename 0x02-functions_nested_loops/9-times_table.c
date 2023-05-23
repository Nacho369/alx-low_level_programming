#include "main.h"


/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, iter;
	int res, f_dig, l_dig;

	for (n = 0; n < 10; n++)
	{
		for (iter = 0; iter < 10; ++iter)
		{
			res = n * iter;
			f_dig = res / 10;
			l_dig = res % 10;

			if (iter != 0)
			{
				_putchar(44);
				_putchar(32);

				if (res < 10)
					_putchar(32);
			}

			if (res < 10)
				_putchar(48 + res);

			else
			{
				_putchar(48 + f_dig);
				_putchar(48 + l_dig);
			}
		}

		_putchar(10);
	}
}
