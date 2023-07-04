#include "lists.h"

/**
 * reall - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @node: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **reall(listint_t **list, size_t size, listint_t *node)
{
	size_t x;
	listint_t **nw_nd;

	nw_nd = malloc(size * sizeof(listint_t *));
	if (!nw_nd)
	{
		free(list);
		exit(98);
	}
	x = 0;
	for (; x < size - 1; x++)
		nw_nd[x] = list[x];
	nw_nd[x] = node;
	free(list);
	return (nw_nd);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: pointer to a pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t z, no = 0;
	listint_t **fx = NULL;
	listint_t *idx;

	if (!head || !*head)
			return (no);
	while (*head != NULL)
	{
		for (z = 0; z < no; z++)
		{
			if (*head == fx[z])
			{
				*head = NULL;
				free(fx);
				return (no);
			}
		}
		no++;
		fx = reall(fx, no, *head);
		idx = (*head)->next;
		free(*head);
		*head = idx;
	}
	free(fx);
	return (no);
}
