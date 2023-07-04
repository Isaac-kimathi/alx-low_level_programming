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
	listint_t *fx;
	int d;

	if (!head || !*head) 
	{
		return (0);
	}
	
	fx = (*head)->next;
	d = fx->n;
	free(*head);
	*head = fx;

	return (d);
}
