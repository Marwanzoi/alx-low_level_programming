#include <stdio.h>
#include <stdlib.h>
/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
int Hex;

for (Hex = '0'; Hex <= '8' ; Hex++)
{

putchar(Hex);
putchar(',');
putchar(' ');

}
putchar('9');

return (0);

}
