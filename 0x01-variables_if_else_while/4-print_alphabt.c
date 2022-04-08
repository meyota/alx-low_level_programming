#include <stdio.h>
/**
 * main - entry point
 * 
 * description: print lowercase alphabet excluding e and q
 * Return: Always 0.
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
