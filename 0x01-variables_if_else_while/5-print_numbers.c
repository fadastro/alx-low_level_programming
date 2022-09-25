/*
* File: 5-print_numbers.c
* Auth: Farai Simba
*/
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry Point
* description - the program print numbers from 0 to 9
* Return: Always success(0)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
