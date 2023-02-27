#include "main.h"

/**
 *   _strcpy - Copying of a string.
 *   @dest: Destination.
 *   @src: Source.
 *   Return: the pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x++] = '\0';
return (dest);
}
