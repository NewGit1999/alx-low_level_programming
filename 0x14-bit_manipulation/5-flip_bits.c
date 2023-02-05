#include "main.h"
/**
 * flip_bits - counts the number of bits needed
 * @n: number asked
 * @m: number to flip n to
 *
 * Return: bits to get n from m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X = n ^ m, bits = 0;

	while (X > 0)
	{
		bits += (X & 1);
		X >>= 1;
	}
	return (bits);
}
