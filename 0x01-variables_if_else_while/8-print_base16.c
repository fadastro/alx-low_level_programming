/*
* File: 8-print_base16.c
* Auth: Farai Simba
*/
#include <stdio.h>

/**
* main - Entry Point
* description - this program print base 16
* Return: Always Sucess(0)
*/
int main(void)
{
int n;
char letter;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
