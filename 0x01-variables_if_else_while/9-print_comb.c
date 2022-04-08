#include <stdio.h>

/**
 * main - entry point
 * description: prints all single digits of base 10
 * starting from 0, followed by a new line
 * Return: Always 0.
 */

int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
