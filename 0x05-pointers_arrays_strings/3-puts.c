#include "main.h"

/**
 * _puts - Print the string
 * @str: The string to update
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
