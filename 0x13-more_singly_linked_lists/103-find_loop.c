#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *clean, *neat;

	clean = neat = head;
	while (clean && neat && neat->next)
	{
		clean = clean->next;
		neat = neat->next->next;
		if (clean == neat)
		{
			clean = head;
			break;
		}
	}
	if (!clean || !neat || !neat->next)
		return (NULL);
	while (clean != neat)
	{
		clean = clean->next;
		neat = neat->next;
	}
	return (neat);
}
