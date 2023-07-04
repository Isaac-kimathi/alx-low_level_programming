#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t q = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		q++;
	}

	return (q);
}
