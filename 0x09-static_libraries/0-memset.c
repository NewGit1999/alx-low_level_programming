#include "main.h"
/**
 * _memset - fills memory with a constant type
 * @s: area
 * @b: constant byte
 * @n: number of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
