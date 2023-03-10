#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - shows the command line arguments.
 * @argc : number of arguments
 * @argv : value of argumenst.
 * Return: return 0.
 */
int main(int argc, char **argv)
{
	int n, i, r;
	int c[] = {25, 10, 5, 2, 1};

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
		while (n >= c[j])
		{
			r++;
			n -= c[j];
		}
	}

	printf("%d\n", r);
	return (0);
}
