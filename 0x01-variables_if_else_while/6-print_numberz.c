/*
* File: 6-print_numberz.c
* Auth: Farai Simba
*/
#include <stdio.h>

/**
* main - Entry point
* description - print numberz from 0 t0 9 with newline after each
* Return: Always success(0)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar("%d\n", n);
}
return (0);
}
