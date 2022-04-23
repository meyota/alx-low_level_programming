#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
int divisor = 1, y, resp;

if (n < 0)
{
_putchar('-');
n *= -1;
}

for (y = 0; n / divisor > 9; y++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);

}
}
