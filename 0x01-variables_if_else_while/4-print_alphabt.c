/*
 * File: 4-print_alphabt.c
 * Auth: Farai Simba
 */
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* description - this program print all the alphabets except q and e
* Return: Always success
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
return (0);
}
