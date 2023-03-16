#include "lists.h"
/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @idx: index of the list
 * @h: head
 * @n: integer
 * Return: NULL if fail, otherwise the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a = *h, node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		a = a->next;
		if (a == NULL)
			return (NULL);
	}
	if (a->next == NULL)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = a;
	node->next = a->next;
	a->next->prev = node;
	a->next = node;
	return (node);
}
