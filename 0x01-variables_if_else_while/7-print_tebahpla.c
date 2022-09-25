/*
* File: 7-print_tebahpla
* Auth: Farai Simba
*/
#include <stdio.h>

/**
* main - Entry point
* description - print aphabets from z to a
* Return: Always Success(0)
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
