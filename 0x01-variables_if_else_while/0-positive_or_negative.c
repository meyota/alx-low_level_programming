#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Dscription: prints random number and states wheather
 *             it is positive, negative, or zero
 * 
 * Return: Always 0.
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
elsei if (n < 1)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);

return (0);
}

