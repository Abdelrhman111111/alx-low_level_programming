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

	int n = 0, dest_len = 0;

	while (dest[n++])
	dest_len++;
	for (i = 0; src[index] && n < i; n++)
	dest[dest_len++] = src[n];
	return (dest);

}
