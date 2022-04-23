#include "main.h"

/**
 * *cap_string - capitalize words
 * @s: pointer
 * Return: capitalzied string
*/
char *cap_string(char *s)
{
int x, y;
int w;
char sep[] = ",\t;\n; .!?\"(){}";

for (x = 0; s[x] != '\0'; x++)
{
w = 0;

if (x == 0)
{
w = 1;
}
else
{
for (y = 0; sep[y] != '\0'; y++)
{
if (s[x - 1] == sep[y])
{
w = 1;
break;
}
}
}

if (w == 1)
{
if (s[x] <= 'z' && s[x] >= 'a')
{
s[x] -= ('a' - 'A');
}
}
}
return (s);
}

