/*
* File: 3-print_alphabets.c
* Auth: Farai Simba
*/
#include <stdio.h>

/**
* main - Entry point
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
