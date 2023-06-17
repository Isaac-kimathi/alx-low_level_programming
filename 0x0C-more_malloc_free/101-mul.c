#include "main.h"

int _isdigit(char *argv);
int _atoi(char *x);
/**
 * main - main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int g;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	g = 1;
	while (g < argc)
	{
		if (_isdigit(argv[g]))
		{
			printf("Error\n");
			exit(98);
		}
		g++;
	}
	return (0);
}
/**
 * _isdigit - whether the string consists of digits
 * @argv: argument vector
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *argv)
{
	int q;

	q = 0;
	while (argv[q])
	{
		if (argv[q] >= '0' && argv[q] <= '9')
			q++;
		else
			return (1);
	}
	return (0);
}
/**
 * _atoi - converts a string of ascii digits to the values they represent
 * @x: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *x)
{
	int y, res;

	y = res = 0;
	while (x[y])
	{
		if (x[y] >= '0' && x[y] <= '9')
		{
			res *= 10;
			res += (x[y] - '0');
		}
		y++;
	}
	return (res);
}
