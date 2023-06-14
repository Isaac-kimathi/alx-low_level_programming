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
	char *str;
	int z, x, c, sz = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (z = 0; z < ac; z++)
	{
		for (x = 0; av[z][x]; x++)
			sz++;
	}

	str = malloc(sizeof(char) * sz + 1);
	if (str == NULL)
		return (NULL);

	c = 0;
	for (z = 0; z < ac; z++)
	{
		for (x = 0; av[z][x]; x++)
		{
			str[c++] = av[z][x];
			str[c++] = '\n';
		}
	}

	str[sz] = '\0';
	return (str);
}
