#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */
void print_rev(char *s)
{
int i;
i = 0;
char *ptr = s;
while (*ptr != '\0')
{
ptr++;
i++;
}
int x;
x = 0;
while (x <= i)
{
_putchar(*(ptr--));
x++;
}
}
