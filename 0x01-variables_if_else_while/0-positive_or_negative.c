/*
* File: 3-print_alphabets.c
* Auth: Farai Simba
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* main - Entry point
* Description - the fuction check n if is negative or positive
* @return - Always 0 (Success)
* return - 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);

if (n > 0)
printf("%d is positive\n", n);

if (n < 0)
printf("%d is negative\n", n);

return (0);

}
