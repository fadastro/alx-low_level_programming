
/*
* File: 3-print_alphabets.c
* Auth: Farai Simba
*/
#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the alphabets in lowercase, and the in uppercase.
* Return: Always 0
*/
int main(void)
{

char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
