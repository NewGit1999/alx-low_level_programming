#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array initialized by specific char
 * @size: size of the array
 * @c: character to initialize with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int a = 0;

	if (size != 0)
		tab = malloc(size * sizeof(char));
	else
		return (NULL);
	if (tab == NULL)
		return (NULL);
	while (a < size)
	{
		tab[a] = c;
		a += 1;
	}
	return (tab);
}
