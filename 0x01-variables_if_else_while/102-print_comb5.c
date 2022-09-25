/*
* File: 102-print_comb5.c
* Auth: Farai Simba
*/
#include <stdio.h>

/**
* main - Entry point
* description - This program print trhee combibnation digits
* Return: Always success(0)
*/
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 == 98 && num2 == 99)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n')
return (0);
}
