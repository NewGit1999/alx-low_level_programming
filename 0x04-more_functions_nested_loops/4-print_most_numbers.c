#include "main.h"
/**
 * print_most_numbers - prints numbers
 */
void print_most_numbers(void)
{
	int N;

	for (N = 0; N <= 9; N++)
	{
		if (N != 2 && N != 4)
			_putchar((N % 10) + '0');
	}
	_putchar('\n');
}
