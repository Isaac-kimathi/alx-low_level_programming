#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * @n: the first n bytes of s2
 * Return: pointer to a newly llocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *P;
	unsigned int q, w, s1_lgth, s2_lgth;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the strings*/
	for (s1_lgth = 0; s1[s1_lgth] != '\0'; s1_lgth++)
		;
	for (s2_lgth = 0; s2[s2_lgth] != '\0'; s2_lgth++)
		;
	/*memory reservation for case 1 & 2*/
	P = malloc(s1_lgth + n + 1);
	if (P == NULL)
	{
		return (NULL);
	}
	/*copy first string into str*/
	for (q = 0; s1[q] != '\0'; q++)
	{
		P[q] = s1[q];
	}
	/*copy 2nd string into str*/
	for (w = 0; w < n; w++)
	{
		P[q] = s2[w];
		q++;
	}

	P[q] = '\0';
	return (P);
}
