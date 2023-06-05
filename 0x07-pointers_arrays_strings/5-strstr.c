#include "main.h"
/**
 * _strstr - function that locates a substring
 * description - finds the first occurrence of the substring needle
 * in the string haystack. terminating null bytes (\0) are not compared
 * @haystack: string to search
 * @needle: substring to check for
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
