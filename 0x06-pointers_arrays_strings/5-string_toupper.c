#include "main.h"

/**
 * string_toupper - Change all lowercase letter to uppercase.
 * @str: The string being changed.
 * Return: the changed string.
 *
 */

char *string_toupper(char *str)

{

	int n = 0;

	while (str[n])
	{
	if (str[n] >= 'a' && str[n] <= 'z')
	str[n] -= 32;
	n++;
	}
	return (str);

}
