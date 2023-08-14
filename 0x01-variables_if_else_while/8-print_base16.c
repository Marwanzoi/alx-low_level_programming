#include <stdio.h>
#include <stdlib.h>
/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char Hex ;
for (Hex = '0';Hex <= '9' ;Hex++)
{
putchar(Hex);
}
for (Hex = 'a'; Hex <= 'f' ; Hex++)
{
putchar(Hex);
}

putchar('\n');
return (0);

}
