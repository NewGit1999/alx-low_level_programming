#include "lists.h"
/**
 * sum_dlistint - sum of all data in a list
 * @head: head of list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
