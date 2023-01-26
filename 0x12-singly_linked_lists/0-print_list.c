#include "list.h"
/**
 * print_list - prints elements of a list
 * @h: node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
