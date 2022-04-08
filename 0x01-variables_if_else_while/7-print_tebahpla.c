#include <stdio.h>

/**
 * main - entry point
 * description: prints lowercase alphabet backwards
 *
 * Return: Always 0.
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
