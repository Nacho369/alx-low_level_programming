#include "main.h"

int check_prime(int n, int inc);

/**
 * is_prime_number - A function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 *
 * @n: Integer value
 *
 * Return: Return 1 if @n is prime
 * 0 otherwise
 */
int is_prime_number(int n)
{
	int inc = 2;

	if (n >= 2 && n <= 3)
		return (1);

	if (n <= 1)
		return (0);

	return (check_prime(n, inc));
}


/**
 * check_prime -  Chexk if yue number is prime
 *
 * @n: Number to  check
 * @inc: Increamanted valu
 *
 * Return:  1 if @n is prime, 0 if it is not
 */
int check_prime(int n, int inc)
{
	if (n % inc == 0)
		return (0);

	if (inc == n / 2)
		return (1);

	return (check_prime(n, inc + 1));
}
