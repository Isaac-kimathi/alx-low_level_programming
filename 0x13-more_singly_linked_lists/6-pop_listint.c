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
	listint_t *fx = *head;
	int d;

	if (*head == NULL || *head == NULL) 
	{
		return (0);
	}
	
	*head = (*head)->next;
	d = fx->n;
	free(fx);

	return (d);
}
