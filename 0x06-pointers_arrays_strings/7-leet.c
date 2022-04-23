#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string
 * Return: s
 */

char *leet(char *s)
{
int x, y;
char lo[] = "aeotl";
char up[] = "AEOTL";
char num[] = "43071";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 5; y++)
{
if (s[x] == lo[y] || s[x] == up[y])
{
s[x] = num[y];
break;
}
}
}
return (s);
}
