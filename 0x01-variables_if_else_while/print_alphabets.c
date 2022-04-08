#include <stdio.h>

/**
 * main - entry point
 * description: print lower and upper alphabet on the same line
 *
 * Return: Always 0.
 */

int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);

puchar('\n');

return (0);
}
