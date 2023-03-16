#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: new node
 * Return: NULL if fail, otherwise the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
