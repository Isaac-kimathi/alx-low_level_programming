#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a linked list at a
 *                    given point
 * @head: pointer to the address of the head of the linked list.
 * @idx: index of the linked list where the new node is to be added.
 * @n: integer for the new node to contain.
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw_nd, *fx;
	unsigned int z;

	fx = *head;
	nw_nd = malloc(sizeof(listint_t));
	if (!nw_nd)
	return (0);
	nw_nd->n = n;
	if (!idx)
	{
		nw_nd->next = fx;
		*head = nw_nd;
		return (nw_nd);
	}
	z = 1;
	for (; z < idx; z++)
	{
		if (!fx || !fx->next)
			return (0);
		fx = fx->next;
	}
	nw_nd->next = fx->next;
	fx->next = nw_nd;

	return (nw_nd);
}
