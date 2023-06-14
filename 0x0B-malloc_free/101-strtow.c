#include "main.h"

void _fetch(char **a, char *str);
void _dev_word(char **a, char *s, int start, int end, int idx);
/**
 * **strtow - function that splits a string into words
 * description - each element of this array should contain a
 * single word, null-terminated
 * if function fails return NULL
 * @str: string to split
 * Return: NULL if str == NULL or empty, else pointer to an array of strings
 */
char **strtow(char *str)
{
	int x, flg, lgt;
	char **w;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	x = flg = lgt = 0;
	while (str[x])
	{
		if (flg == 0 && str[x] != ' ')
			flg = 1;
		if (x > 0 && str[x] == ' ' && str[x - 1] != ' ')
		{
			flg = 0;
			lgt++;
		}
		x++;
		}

		lgt += flg == 1 ? 1 : 0;
		if (lgt == 0)
		return (NULL);

		w = (char **)malloc(sizeof(char *) * (lgt + 1));
		if (w == NULL)
			return (NULL);
		_fetch(w, str);
		w[lgt] = NULL;
		return (w);
}

/**
 * _dev_word - initializes a word and insert it into the array
 * @a: the array of strings
 * @s: the string
 * @start: the starting index of the word
 * @end: the last index of the word
 * @idx: the index of the array to insert the word
 */
void _dev_word(char **a, char *s, int start, int end, int idx)
{
	int x, y;

	x = end - start;
	a[idx] = (char *)malloc(sizeof(char) * (x + 1));

	y = 0;
	for (; start < end; start++, y++)
		a[idx][y] = s[start];
	a[idx][y] = '\0';
}

/**
 * _fetch - function uesd in fetching words into an array
 * @a: array of strings
 * @str: the string parameter
 */
void _fetch(char **a, char *str)
{
	int q, w, strt, flg;

	q = w = flg = 0;
	while (str[q])
	{
	if (flg == 0 && str[q] != ' ')
	{
		strt = q;
		flg = 1;
	}
	if (w > 0 && str[q] == ' ' && str[q - 1] != ' ')
	{
		_dev_word(a, str, strt, q, w);
		w++;
		flg = 0;
	}
	q++;
	}
	if (flg == 1)
	_dev_word(a, str, strt, q, w);
}
