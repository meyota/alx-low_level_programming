#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int deci;
if (n == 0)
{
_putchar('0');
}
else
{
deci = n & 1;
n = n >> 1;
if (!(n == 0))
print_binary(n);
_putchar(deci + '0');
}
}

