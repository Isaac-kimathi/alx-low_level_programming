#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to
 *  make change for an amount of money
 * @argc: argument count
 * @argv: argumnt vector
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int n, coins = 0, money = atoi(argv[1]);
	int x[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (n = 0; n < 5; n++)
		{
			if (money >= x[n])
			{
				coins += money / x[n];
				money = money % x[n];
				if (money % x[n] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


