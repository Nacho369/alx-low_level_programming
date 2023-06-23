#include "variadic_functions.h"

void f_char(va_list args);
void f_int(va_list args);
void f_float(va_list args);
void f_str(va_list args);


/**
 * print_all - Function that prints anything
 *
 * @format: Is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int indx = 0, indx2;
	va_list args;
	f_type types[] = {
		{'c', f_char},
		{'i', f_int},
		{'f', f_float},
		{'s', f_str}
	};
	char *sep = "";

	va_start(args, format);

	while (format[indx] != '\0' && format != NULL)
	{
		indx2 = 0;

		while (indx2 < 4)
		{
			if (format[indx] == types[indx2].ft)
			{
				printf("%s", sep);
				types[indx2].func_type(args);
				sep = ", ";
			}
			indx2++;
		}
		indx++;
	}

	printf("\n");
	va_end(args);
}


/**
 * f_char - Prints a character
 *
 * @args: Character
 *
 * Return: void
 */
void f_char(va_list args)
{
	int c;

	c = va_arg(args, int);

	printf("%c", c);
}


/**
 * f_int - Prints an integer
 *
 * @args: Character
 *
 * Return: void
 */
void f_int(va_list args)
{
	int i;

	i = va_arg(args, int);

	printf("%d", i);
}


/**
 * f_float - Prints a float
 *
 * @args: Character
 *
 * Return: void
 */
void f_float(va_list args)
{
	float f;

	f = va_arg(args, double);

	printf("%f", f);
}


/**
 * f_str - Prints a string
 *
 * @args: Character
 *
 * Return: void
 */
void f_str(va_list args)
{
	char *str = NULL;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
