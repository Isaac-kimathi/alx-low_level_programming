#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @n:
 * @head: 
 * return: Null incase of failure, address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_nd;

	if (head == NULL)
		return (NULL);
	nw_nd = malloc(sizeof(dlistint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->prev = NULL;
	nw_nd->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = nw_nd;
	(*head) = nw_nd;

	return(nw_nd);
}
