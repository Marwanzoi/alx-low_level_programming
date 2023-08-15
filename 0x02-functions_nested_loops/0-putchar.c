#include <stdio.h>
#include "main.h"
/*
 * Main - The main function
 * Description : program that prints _putchar
 *
*/
int main(void)
{
char strings[] = "_putchar";
int c;
for (c = 0; c <= 8; c++)
{
_putchar(strings[c]);

}
_putchar('\n');
return (0);
}
