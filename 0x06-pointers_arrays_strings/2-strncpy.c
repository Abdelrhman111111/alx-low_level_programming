#include "main.h"



/**
 * _strncpy - Copies of an inputted number
 * from string src into dest.
 * @dest:storing the string copy.
 * @src: The source.
 * @n: The maximum number of byte to be copied from the src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i = 0, src_len = 0;

	while (src[i++])
	src_len++;

	for (i  = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = src_len; i < n; i++)
	dest[i] = '\0';

	return (dest);

}
