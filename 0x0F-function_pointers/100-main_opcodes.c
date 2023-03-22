#include <stdio.h>
#include <stdlib.h>

/**
 * main - ........................
 * @argc: ............................
 * @argv: ................
 *
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int x, i;
	int (*y)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		code = *(unsigned char *)y;
		printf("%.2x", code);

		if (i == x - 1)
			continue;
		printf(" ");

		y++;
	}

	printf("\n");

	return (0);
}
