#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: pointer to the address of the head of the linked list.
 * @n: integer for the new node..
 *
 * Return: NULL or Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_nd;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);
	
	nw_nd->n = n;
	if (*head == NULL)
	{
		*head = nw_nd;
	}
	else
	{
		nw_nd->next = *head;
		*head = nw_nd;
	}

	return (nw_nd);
}
