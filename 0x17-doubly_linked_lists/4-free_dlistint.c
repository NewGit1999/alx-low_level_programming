#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	for (; head != NULL;)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
