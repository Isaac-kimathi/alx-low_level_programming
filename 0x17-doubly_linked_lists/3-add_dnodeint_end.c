#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw_nd;
	dlistint_t *h;

	nw_nd = malloc(sizeof(dlistint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = NULL;
	h = *head;
	if (*h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nw_nd;
	}
	else
	{
		*head = nw_nd;
	}
	nw_nd->prev = h;

	return (nw_nd);
}
