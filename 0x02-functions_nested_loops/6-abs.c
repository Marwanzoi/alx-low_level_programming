#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: The integer.
 *
 * Return: the integer become greater than 0.
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1 ;
}
return (n);

}
