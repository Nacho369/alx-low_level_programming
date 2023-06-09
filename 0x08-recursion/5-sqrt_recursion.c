#include "main.h"

int find_sqrt(int n, int rt);

/**
 * _sqrt_recursion - Return natural sqrt of a number
 *
 * @n: Number whose natural sqrt is to be return
 *
 * Return: Natural sqrt of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Find the sqr root
 *
 * @n: Number value
 * @rt: Root
 *
 * Return: the root
 */
int find_sqrt(int n, int rt)
{
	if ((rt * rt) == n)
		return (rt);

	if ((rt * rt) > n)
		return (-1);

	rt += 1;
	return (find_sqrt(n, rt));
}
