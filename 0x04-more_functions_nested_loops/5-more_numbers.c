#include "main.h"


/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, iter;
	int unit, tens;

	for (iter = 0; iter < 10; iter++)
	{
		for (num = 0; num < 15; num++)
		{
			unit = num / 10;
			tens = num % 10;

			if (num > 9)
				_putchar(48 + unit);

			_putchar(48 + tens);
		}

		_putchar(10);
	}
}
