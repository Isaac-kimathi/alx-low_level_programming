#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 *
 * @h: double pointer to the beginning of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to enter into new node
 * Return: the address of the new node,or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *nw_nd, *current;

	nw_nd = NULL;
	if (idx == 0)
		nw_nd = add_dnodeint(h, n);
	else
	{
		current = *h;
		x = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (x == idx)
			{
				if (current->next == NULL)
					nw_nd = add_dnodeint_end(h, n);
				else
				{
					nw_nd = malloc(sizeof(dlistint_t));
					if (nw_nd != NULL)
					{
						nw_nd->n = n;
						nw_nd->next = current->next;
						nw_nd->prev = current;
						current->next->prev = nw_nd;
						current->next = nw_nd;
					}
				}
				break;
			}
			current = current->next;
			x++;
		}
	}

	return (nw_nd);
}
