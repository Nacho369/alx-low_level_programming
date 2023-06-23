#include "main.h"


/**
 * print_all - Function that prints anything
 *
 * @format: Is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(a, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{case 'c':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(a, int));
			break;
		case 'i':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(a, int));
			break;
		case 'f':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(a, double));
			break;
		case 's':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			p = va_arg(a, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		j++;
	}
	printf("\n");
	va_end(a);
}
