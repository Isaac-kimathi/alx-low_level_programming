#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	x = 0;
	for (; head != NULL; x++)
	{
		if (x == index)
			break;
		head = head->next;
	}

	return (head);

}
