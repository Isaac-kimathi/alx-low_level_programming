#include "lists.h"

/**
 * _slngth - returns the length of a string
 * @s: the string length to be checked
 * Return: int lngth of string
 */
int _slngth(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - prints linked lists
 * @h: list head
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		printf("[%d] %s\n", _slngth(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		w++;
	}

	return (w);
}
