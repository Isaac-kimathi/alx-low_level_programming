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
	dlistint_t *nw_nd, *temp;

	if (head == NULL)
		return (NULL);
	nw_nd = malloc(sizeof(dlistint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = NULL;
	if (*head == NULL)
	{
		nw_nd->prev = NULL;
		*head = nw_nd;
		return (nw_nd);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nw_nd;
	nw_nd->prev = temp;
	return (nw_nd);
}
