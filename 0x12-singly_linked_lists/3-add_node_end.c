#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *              of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *  Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_nd = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !nw_nd)
		return (NULL);
	if (str)
	{
		nw_nd->str = strdup(str);
		if (!nw_nd->str)
		{
			free(nw_nd);
			return (NULL);
		}
		nw_nd->len = _slngth(nw_nd->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = nw_node;
	}
	else
		*head = nw_nd;

	return (nw_nd);
}
