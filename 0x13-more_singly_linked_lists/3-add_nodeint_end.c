#include "lists.h"

/**
 * add_nodeint_end - add new nodes to the end of the linked list
 * @head: pointer of address of head
 * @n: integer contagained in the new node
 * Return: address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_nd, *lst_nd;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);

	nw_nd->n = n;
	nw_nd->next = NULL;

	if (*head == NULL)
	{
		*head = nw_nd;
	}
	else
	{
		lst_nd = *head;
		while (lst_nd->next != NULL)
			lst_nd = lst_nd->next;
	
		lst_nd->next = nw_nd;
	}

	return (nw_nd);
}
