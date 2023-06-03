#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @qw: string parameter
 * Return: string
 */
char *leet(char *qw)
{
	int h = 0, i, len = 5;
	char tr[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {'4', '3', '0', '7', '1'};

	while (qw[h])
	{
		for (i = 0; i < len; i++)
		{
			if (qw[h] == tr[i] || qw[h] - 32 == tr[i])
				qw[h] = value[i];
		}
		h++;
	}
	return (qw);
}
