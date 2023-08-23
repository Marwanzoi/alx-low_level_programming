#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */
void print_rev(char *s)
{
char *ptr = s;
int i = 0;
int x = 0;
while (*ptr != '\0')
{
ptr++;
i++;
}
while (x <= i)
{
_putchar(*(ptr--));
x++;
}
}
