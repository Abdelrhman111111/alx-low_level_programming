#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the command arguments 
 * @argc : number of arguments
 * @argv : string argumenstvectot
 * Return: return 0 
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
