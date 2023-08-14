#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'e' && c != 'q')
            putchar(c);
    }

    putchar('\n');

    return (0);
}
