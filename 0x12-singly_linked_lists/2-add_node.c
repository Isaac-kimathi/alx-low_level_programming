#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *           of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_hd = malloc(sizeof(list_t));

	if (!head || !nw_hd)
		return (NULL);

	nw_hd->str = strdup(str);
	if (!nw_hd->str)
	{
		free(nw_hd);
		return (NULL);
	}

	nw_hd->next = *head;
	*head = nw_hd;

	return (nw_hd);
}
