#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Writes the lowercase alphabets from 'a' to 'z'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return 0;
}
