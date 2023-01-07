#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: bytes
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		b = 0;
		while (*(accept + a) != '\0')
		{
			if (*s == *(accept + a))
				b = 1;
			a++;
		}
		a = 0;
		if (b == 1)
			return (s);
		s++;
	}
	return (NULL);
}
