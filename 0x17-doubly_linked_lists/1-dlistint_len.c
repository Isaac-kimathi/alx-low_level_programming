#include "lists.h"

/**
 * dlistint_len - count the no of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	for (; h != NULL; n++)
		h = h->next;
	return (n);
}
