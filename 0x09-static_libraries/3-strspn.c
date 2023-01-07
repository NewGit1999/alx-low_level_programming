#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: bytes to be checked
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b = 0;
	int c;

	while (*s != '\0')
	{
		c = 0;
		while (*(accept + b) != '\0')
		{
			if (*s == *(accept + b))
				c = 1;
			b++;
		}
		b = 0;
		if (c == 0)
			break;
		a++;
		s++;
	}
	return (a);
}
