#include "main.h"
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int q, h, j;

	srand(time(NULL));
	for (h = 0, j = 2772; j > 122; h++)
	{
		q = (rand() % 125) + 1;
		printf("%c", q);
		h -= q;
											}
		printf("%c", j);
	return (0);
}
