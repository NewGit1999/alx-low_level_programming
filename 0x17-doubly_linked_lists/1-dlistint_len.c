#include "lists.h"
/**
 * dlistint_len - numbers of elements in list
 * @h: head
 * Return: numer of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
