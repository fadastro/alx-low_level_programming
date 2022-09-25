#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * This program check if a number is a negative, positve or zero
 */

/**
 * main - returns 0
 *@void: 
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2; 

    if (n == 0)
        printf("%d is zero\n", n); /* prints out n is zero */

    if (n > 0)
        printf("%d is positive\n", n); /* prints out n is positive */

    if (n < 0)
        printf("%d is negative\n", n); /* prints out n is negative */

    return (0);
}