/*
* File: 0-putchar.c
* Auth: Farai Simba
*/
#include <main.h>
/**
 * main - Entry point
 * description - this program print _putchar
 * Return: Always success(0)
*/
int main(void)
{
char c[8] = "_putchar";
int i;

for (i = 0; i <= 8; i++)
{
_putchar(c[i]);
}

_putchar('\n');
return (0);
}