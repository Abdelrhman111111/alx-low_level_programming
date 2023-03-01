#include "main.h"

/**
 *  _strncat - Concatenates two strings using at the most
 *
 *  an inputted number of byte from src.
 *
 *  @dest: The string to be append upon.
 *
 *  @src: The string to be append to dest.
 *
 *  @n: The number of bytes from src to be appended to the dest.
 *
 *  Return: A pointer to the string dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int m = 0, dest_len = 0;

	while (dest[m++])
	dest_len++;
	for (n = 0; src[m] && m < n; m++)
	dest[dest_len++] = src[m];
	return (dest);

}
