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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
