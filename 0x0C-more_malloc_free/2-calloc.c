#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: bytes
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	a = mem;
	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';
	return (mem);
}
