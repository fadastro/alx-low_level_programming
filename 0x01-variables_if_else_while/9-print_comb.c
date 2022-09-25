/*
* File: 9-print_comb.c
* Auth: Farai Simba
*/
#include <stdio.h>

/**
 * main - Entry Point
 * description - this program prints number with comma and space between upto 9
 * Return: Always Success(0)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
