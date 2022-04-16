#include "main.h"

/**
 * print_square - prints hashtags to make a square
 * @n: limit
 * Return: void
 */
void print_square(int size)
{
int i; j;

if (sie > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
