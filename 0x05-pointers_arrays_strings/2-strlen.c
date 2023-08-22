#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
int length;
while (*s != '\0')
{
s++;
length++;
}
return (length);
}
