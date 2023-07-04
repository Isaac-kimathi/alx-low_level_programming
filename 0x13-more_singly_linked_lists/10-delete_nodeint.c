#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: location of the node to delete
 * Return: pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_nd, *tmp_nd2;
	unsigned int x;

	if (!head || !*head)
		return (-1);

	if (!index )
	{
		tmp_nd = *head;
		*head = (*head)->next;
		free(tmp_nd);
		return (1);
	}
	tmp_nd = *head;
	while (tmp_nd)
	{
		if (x == index)
		{
			tmp_nd2->next = tmp_nd->next;
			free(tmp_nd);
			return (1);
		}
		x++;
		tmp_nd2 = tmp_nd;
		tmp_nd = tmp_nd->next;
	}
	return (-1);
}
