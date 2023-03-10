#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - put argument of cmd
 * @argc: arguments number
 * @argv: value of arguments
 * Return: retuen 0 
 */
int main(int argc, char *argv[])
{
	int add, n, d;

	add = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d] != '\0'; d++)
		{
			if (!isdigit(argv[n][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
	}
	printf("%d\n", add);
	return (0);
}
