#include "main.h"

/**
 * puts2 - Prints every character of a string in a line
 * @str: The string to be modified
 * Return: void
 */

void puts2(char *str)

{

	int x;
	int y = 0;

	while (str[y] != '\0')
	{
	y++;
	}

	for (x = 0; x < y; x += 2)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
