#include "lists.h"
/**
 * list_len - returns the number of elements in liked list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
