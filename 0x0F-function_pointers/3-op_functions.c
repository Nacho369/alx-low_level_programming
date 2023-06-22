#include "3-calc.h"

/**
 * op_add - Function
 *
 * @a: First number to add
 * @b: Second number
 *
 * Return: The result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to subtract
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function to find the modulus of a number
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The result of the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
