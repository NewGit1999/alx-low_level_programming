#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory
 * @ptr: pointer
 * @old_size: size of allocated space
 * @new_size: the new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *a, *b;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = ptr;
	mem = malloc(sizeof(*a) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	b = mem;
	for (i = 0; i < old_size && i < new_size; i++)
		b[i] = *a++;
	free(ptr);
	return (mem);
}
