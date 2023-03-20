#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: first position
 * @src: second position
 * @n: number of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (a < n)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
