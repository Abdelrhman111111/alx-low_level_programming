#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - get minimum of coins.
 * @argc: arguments numbers.
 * @argv: value of arguments.
 * Return: return 0.
 */
int main(int argc, char **argv)
{
	int n, i, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			r++;
			n -= coins[i];
		}
	}

	printf("%d\n", r);
	return (0);
}
