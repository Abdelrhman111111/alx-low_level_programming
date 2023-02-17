/*
 *3-print_alphabets.c
 *by abdelrhman
 */

#include <stdio.h>

/**
 * main-  Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 of main func .
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

