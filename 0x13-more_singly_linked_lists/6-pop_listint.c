#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a pointer to pointer
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n = tmp->n;

	if (*head == NULL)
	{
		return (0);
	}
	
	*head = (*head)->next;
	free(tmp);

	return (n);
}
