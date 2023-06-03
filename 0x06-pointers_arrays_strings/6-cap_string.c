#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @str: string parameter
 * Return: string
 */
char *cap_string(char *str)
{
	int x;
	char spc[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int y = 13;
	int z = 0;

	while (str[z])
	{
	for (x = 0; x < y; x++)
	{
		if ((z == 0 || str[z - 1] == spc[x]) && (str[z] >= 97 && str[z] <= 122))
			str[z] = str[z] - 32;
	}
	z++;
	}
	return (str);
}
