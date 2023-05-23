#include "main.h"


/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: Number whose last digit is to be printed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar(last_digit);

	return (last_digit);
}
