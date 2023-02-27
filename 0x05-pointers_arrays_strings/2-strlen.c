#include <stdio.h>

/**
 *  _strlen - Returns the length of a string.
 * @str: The string to get its length.
 * Return: The length of the string.
 */
size_t _strlen(const char *str)

{
	size_t l = 0;

	while (*str++)
	l++;
	return (l);

}
