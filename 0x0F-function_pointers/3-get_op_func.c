#include "3-calc.h"


/**
 * get_op_func - Get the function to operate on
 *
 * @s: The operator chosen
 *
 * Return: The pointer to the operator's function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (i < 6)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (ops[i].f);
}
