#include <stdio.h>
#include <stdlib.h>
/**
 * main - shows the command line arguments.
 * @argc : number of arguments
 * @argv : value of argumenst.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int arg, argg, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg = atoi(argv[1]);
	argg = atoi(argv[2]);

	p = arg * argg;

	printf("%d\n", p);

	return (0);
}
