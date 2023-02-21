#include "main.h"
/**
 * get_bit - returns the value of a bit at given index
 * @n: bit
 * @index: The index starting from 0 of the bit to get
 *
 * Return: conditions of result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
