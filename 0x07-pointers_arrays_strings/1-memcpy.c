#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - print buffer in hex
 * @buffer: the address of memory.
 * @size: the size of the memory
 *
 * Return: void.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int x;

    x = 0;
    while (x < size)
    {
        if (x % 10)
        {
            printf(" ");
        }
        if (!(x % 10) && x)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[x]);
        x++;
    }
    printf("\n");
