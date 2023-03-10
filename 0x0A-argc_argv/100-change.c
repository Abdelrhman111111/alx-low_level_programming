#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - shows the command line arguments.
 * @argc : number of arguments
 * @argv : value of argumenst.
 * Return: return 0.
 */
int main(int argc, char **argv)
{
	int n, j, r;
	int centss[] = {25, 10, 5, 2, 1};

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

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= cents[j])
		{
			r++;
			n -= cents[j];
		}
	}

	printf("%d\n", r);
	return (0);
}
