#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero at a given index
 * @n: a pointer
 * @index: the index of the asked bit , starting from 0
 *
 * Return: conditions of result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
