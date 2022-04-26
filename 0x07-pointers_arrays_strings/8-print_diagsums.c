#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 *                  a square matrix of integers
 * @a: array
 * @size: buffer
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int i, j, c = 0, d = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
c = c + a[(size + 1) * i];
}
if (i + j == size - 1)
{
d = d + a[(size - 1) * (i + 1)];
}
}
}
printf("%i, %i\n", c, d);
}
