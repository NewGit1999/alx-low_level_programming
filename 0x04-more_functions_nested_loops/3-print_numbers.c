#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int N;

	for (N = 0; N <= 9; N++)
		_putchar((N % 10) + '0');
	_putchar('\n');
}
