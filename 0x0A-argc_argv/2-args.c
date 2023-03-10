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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
