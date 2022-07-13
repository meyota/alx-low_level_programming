#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string
 * @c: char
 * Return: null if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}

return (s + 1);
}
