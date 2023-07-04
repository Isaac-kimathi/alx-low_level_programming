#include "lists.h"

#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: pointer to the address of the head of the linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *temp;

	if (!head || !*head)
		return (0);
	temp = NULL;
	while ((*head)->next != NULL)
	{
		node = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = node;
	}
	(*head)->next = temp;
	return (*head);
}
