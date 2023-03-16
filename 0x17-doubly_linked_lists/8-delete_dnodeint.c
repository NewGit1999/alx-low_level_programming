#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: head
 * @index: index of node to delete
 * Return: conditions of result
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (a == NULL)
			return (-1);
		a = a->next;
	}
	if (a == *head)
	{
		*head = a->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		a->prev->next = a->next;
		if (a->next != NULL)
			a->next->prev = a->next;
	}
	free(a);
	return (1);
}
