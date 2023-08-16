#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if a c is a character.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase or Uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
