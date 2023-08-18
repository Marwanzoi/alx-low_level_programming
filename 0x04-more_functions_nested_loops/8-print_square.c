#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the integer n.
 * @size : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int size)
{
	int x;
	int y;
if (size > 0)
{
for (y = 0; y < size; y++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
