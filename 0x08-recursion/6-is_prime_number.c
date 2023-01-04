#include "main.h"
/**
 * is_prime_number - 1 if a prime number, 0 otherwise
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getPrime(n, 2));
}

/**
 * getPrime - checks if 0 or 1
 * @a: input
 * @b: count
 * Return: int
 */
int getPrime(int a, int b);
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (getPrime(a, b + 1));
}
