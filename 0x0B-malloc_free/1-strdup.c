#include "main.h"
/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * description: function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or Null if str is null or
 *  insufficient memory
 */
char *_strdup(char *str)
{
	int d, size = 0;
	char *y;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	y = malloc(size * sizeof(*str) + 1); /*+1 puts the end of the string char*/
	if (y == 0)
		return (NULL);

	else
	{
		for (d = 0; d < size; d++)
			y[d] = str[d];
	}
	return (y);
}
