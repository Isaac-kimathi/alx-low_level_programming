#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to the head of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *fx = head, *tmp;

	while (fx != NULL)
	{
		tmp = fx;
		fx = fx->next;
		free(fx);
	}
}
