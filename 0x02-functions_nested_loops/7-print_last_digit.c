#include "main.h"
/**
 * print_last_digit - print digit of number
 * @n: number asked
 * Return: value of last digit
 */
int print_last_digit(int)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
