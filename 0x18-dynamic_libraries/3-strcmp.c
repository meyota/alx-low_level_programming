#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character that will be updated
 * @s2: A pointer to a character that will be updated
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
char *x = s1;
char *y = s2;
while (*x != '\0' && *y != '\0' && *x == *y)
{
x++;
y++;
}

return (*x - *y);
}
