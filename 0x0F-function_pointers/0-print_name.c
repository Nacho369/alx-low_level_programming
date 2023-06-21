#include "function_pointers.h"


/**
 * print_name - A function that prints a name using function pointers
 *
 * @name: String to print out
 * @f: Function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
