#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: number of copies
 *
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] '\0';
		a++;
	}
	return (dest);
}
