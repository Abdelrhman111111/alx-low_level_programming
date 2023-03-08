#include "main.h"

/**
  * _print_rev_recursion - Print in reverse
  * @s: input value
  *
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
