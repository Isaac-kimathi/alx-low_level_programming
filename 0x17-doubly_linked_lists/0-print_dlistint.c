#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the beginning of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	x = 0;
	for(; h != NULL; x++)
	{
		printf("%d\n", h->i);
		h = h->next;
	}
	return (x);
}
