#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getSqr(n, 1));
}

/**
 * getSqr - gets the number of square root
 * @a: input
 * @b: count
 * Return: int
 */
int getSqr(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if (a > (b * b))
		return (getSqr(a, b + 1));
	else
		return (-1);
}
