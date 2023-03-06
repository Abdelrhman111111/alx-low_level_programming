#include <stdio.h>
#include "main.h"

/**
 * _strstr - the Entry point
 * @haystack: value
 * @needle: value
 * Return: return 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (NULL);
}
