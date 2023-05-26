#include "main.h"
/**
 * main - prints nos from 1 to 100, followed by a new line
 * Description - multiples of 3 and 5, prints Fizz and Buzz respectively
 *     for multiples of both prints FizzBuzz
 * Return: always 0
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 5 == 0 && !(l % 3 == 0))
			printf("Buzz");
		else if (l % 3 == 0 && !(l % 5 == 0))
			printf("Fizz");
		else if (l % 5 == 0 && l % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", l);

		if (l != 100)
			printf("%c", 32);
		else
			printf("\n");
	}
	return (0);
}
