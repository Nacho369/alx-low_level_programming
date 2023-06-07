#include "main.h"


/**
 * set_string - Set the value of a pointer to a character
 *
 * @s: Pointer to a string
 * @to: Pointer to the character part of the string is to be set to
 *
 * Return: void
 */
void set_string(char**s,char*to)
{
	*s = to;
}
