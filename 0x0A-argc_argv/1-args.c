#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints arguments number
 * @argc : number of arguments
 * @argv : argumenst vector
 * Return: return 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
