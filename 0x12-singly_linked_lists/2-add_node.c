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
	list_t *new;
	char *dp;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dp = strdup(str);
	if (dp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
