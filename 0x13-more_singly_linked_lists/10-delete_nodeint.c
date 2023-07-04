#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: location of the node to delete
 * Return: pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp, *node2;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		node2 = (*head)->next;
		free(*head);
		*head = node2;
		return (1);
	}
	tmp = *head;
	x = 1;
	for (; x < index; x++)
	{
		if (!tmp->next)
			return (-1);
		tmp = tmp->next;
	}
	node2 = tmp->next;
	tmp->next = node2->next;
	free(node2);
	return (1);
}
