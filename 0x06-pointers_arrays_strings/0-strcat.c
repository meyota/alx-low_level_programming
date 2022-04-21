#include "main.h"

/**
 * *_strcpy - concatenates two strings
 * @dest: A pointer to a character that will be updated
 * @src: A pointer to a character that will be updated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
