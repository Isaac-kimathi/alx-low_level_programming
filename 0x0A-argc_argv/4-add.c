#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *y;
	int res = 0;

	while (--argc)
	{
		for (y = argv[argc]; *y; y++)
			if (*y < '0' || *y > '9')
				return (printf("Error\n"), 1);
	       res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
