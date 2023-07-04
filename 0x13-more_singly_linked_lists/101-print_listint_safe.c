#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nw_nd;
	size_t d;

	nw_nd = malloc(size * sizeof(listint_t *));
	if (nw_nd == NULL)
	{
		free(list);
		exit(98);
	}
	for (d = 0; d < size - 1; d++)
		nw_nd[d] = list[d];
	nw_nd[d] = new;
	free(list);
	return (nw_nd);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, z = 0;
	const listint_t **str = NULL;

	while (head != NULL)
	{
	for (x = 0; x < z; x++)
	{
		if (head == str[x])
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(str);
			return (z);
		}
	}
	z++;
	str = _r(str, z, head);
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	free(str);
	return (z);
}
