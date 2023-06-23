#include "function_pointers.h"
/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n;
	char *s = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	while (n--)
		printf("%02hhx%s", *s++, n ? " " : "\n");
	return (0);
}
