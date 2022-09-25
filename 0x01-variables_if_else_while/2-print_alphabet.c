#include <stdio.h>

/**
 * manin - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}