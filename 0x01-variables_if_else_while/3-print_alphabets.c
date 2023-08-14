#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description : prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
        char c = 'a';
        char ch = 'A';

        while (c <= 'z')
        {
                putchar(c);
                c++;
        }

        while (ch <= 'Z')
        {
                putchar(ch);
                ch++;
        }
        return (0);
}
