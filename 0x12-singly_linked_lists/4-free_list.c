#include "lists.h"

/**
 * free_list - free list_t
 * @head: node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *nd;

	while (h != NULL)
	{
		nd = head->next;
		free(head->str);
		free(head);
		head = nd;
	}
}
