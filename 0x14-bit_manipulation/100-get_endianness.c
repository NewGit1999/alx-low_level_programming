#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int a = 1;
	char *endian = (char *) &a;

	if (*endian == 1)
		return (1);
	return (0);
}
