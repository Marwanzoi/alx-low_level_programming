#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code for ALX School students.
 *
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
char c = 'a';
int n;
for (n = 0; n <= 9; n++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
