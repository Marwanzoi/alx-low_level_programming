#include <stdio.h>
#include "main.h"
/*
 *Description :  function that checks for uppercase character.
 * @c : the checker
 * Return 1 if it's uppercase otherwise  return 0.
*/
int _isupper(int c)
{
if(c >= 65 && c < 91)
return (1);
else
return (0);
}
