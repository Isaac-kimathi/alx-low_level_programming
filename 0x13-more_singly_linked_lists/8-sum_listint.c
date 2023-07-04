#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Calculates the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: sum of all the data or 0,
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
