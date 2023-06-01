#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @q: input string
 * Return: character
 */
char *rot13(char *q)
{
	int n;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = q;

	while (*q)
	{
		for (n = 0; n <= 52; n++)
		{
			if (*q == rot13[n])
			{
				*q = ROT13[n];
				break;
			}
		}
		q++;
	}
	return (ptr);
}
