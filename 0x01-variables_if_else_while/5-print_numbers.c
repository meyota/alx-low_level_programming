#include <stdio.h>

/**
 * main - entry point
 * 
 * description: print numbers 0 to 9 on the same line
 * Return: 0
 */

int main(void)
{
char i;
for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
