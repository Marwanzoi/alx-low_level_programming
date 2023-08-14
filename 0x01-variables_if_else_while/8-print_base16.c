#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char Hex ;
for ( Hex = '0'; Hex <= '9' ; Hex++ )
{
putchar(Hex);
}
for ( Hex = 'a'; Hex <= 'f' ; Hex++ )
{
putchar(Hex);
}

putchar('\n');
return 0;

}
