#include <stdio.h>


int main(void)
{
	int num = -3465;
	int last_digit;

	if (num < 0)
		num *= -1;

	last_digit = num % 10;

	printf("%d\n", num);
	printf("%d\n", last_digit);

	return (0);
}
