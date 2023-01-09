#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to memory space
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a += 1;
	a += 1;
	dup = malloc(a * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (b < a)
	{
		dup[b] = str[b];
		b += 1;
	}
	return (dup);
}
