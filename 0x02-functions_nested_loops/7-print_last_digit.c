#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that return the last digit of a number
 * @n: The integer.
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
{
n = n * -1;
}
a = n % 10 ;
return (a);
}
