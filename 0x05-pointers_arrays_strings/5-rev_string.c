#include "main.h"


/**
 * rev_string - Rev a string
 * @s: The string being modified
 * Return: void
 */

void rev_string(char *s)

{

	int l = 0, index = 0;
	char box;

	while (s[index++])
	l++;

	for (index = l - 1; index >= l / 2; index--)
	{
	box = s[index];
	s[index] = s[l - index - 1];
	s[l - index - 1] = box;
	}
}
