#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list
 * @head: beginning of doubly liked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *now;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);
	now = *head;
	if (index == 0)
	{
		*head = now->next;
		if (now->next != NULL)
		{
			now->next->prev = NULL;
		}
		free(now);
		return (1);
	}
	x = 0;
	for (; x < index; x++)
	{
		if (now->next == NULL)
			return (-1);
		now = now->next;
	}
	now->prev->next = now->next;
	if (now->next != NULL)
		now->next->prev = now->prev;
	free(now);
	return (1);
}
