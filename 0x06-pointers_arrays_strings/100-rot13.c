#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
int a, b;
char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; input[y] != '\0'; b++)
{
if (s[a] == input[b])
{
s[a] = output[b];
break;
		}
}
}
return (s);
}
