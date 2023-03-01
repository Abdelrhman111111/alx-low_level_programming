#include <stdio.h>

/**
 *  _strcat - Concatenate two strings
 *  @dest: destination string
 *  @src: source string
 *  Return: dest value
 */

char *_strcat(char *dest, char *src)

{
	int l = 0, i;

	while (dest[l])
	{
		l++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}
