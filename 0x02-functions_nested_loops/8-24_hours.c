#include "main.h"


/**
 * jack_bauer - Prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, f_hr, l_hr;
	int min, f_min, l_min;

	for (hour = 0; hour < 24; hour++)
	{
		f_hr = hour / 10;
		l_hr = hour % 10;

		for (min = 0; min < 60; min++)
		{
			f_min = min / 10;
			l_min = min % 10;

			_putchar(48 + f_hr);
			_putchar(48 + l_hr);

			_putchar(58);

			_putchar(48 + f_min);
			_putchar(48 + l_min);

			_putchar(10);
		}
	}
}
