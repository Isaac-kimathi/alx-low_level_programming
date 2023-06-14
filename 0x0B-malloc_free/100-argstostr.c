#include "main.h"
/**
 * *argstostr - function that concatenates all the arguments of your program
 * description - Returns NULL if ac == 0 or av == NULL
 *     Each argument should be followed by a \n in the new string
 * @ac: number of arguments passed
 * @av: array of pointers
 * Return: pointer to a new string, or Null if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *c;
	int z, x, d, sz = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (z = 0; z < ac; z++)
	{
		c = av[z];
		x = 0;
		while (c[x++])
		{
			sz++;
		}
		++sz;
	}

	str = (char *)malloc(sizeof(char) * sz + 1);
	if (str == NULL)
		return (NULL);

	z = 0;
	x = 0;
	for (; z < ac && x < sz; z++)
	{

		c = av[z];
		d = 0;
		while (c[d])
		{
			str[x] = c[d];
			d++;
			x++;
		}
		str[x++] = '\n';
	}

	str[x] = '\0';
	return (str);
}
