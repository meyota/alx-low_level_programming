#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: to memory area
 * @src: from memory area
 * @n: number of elements
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *x;

x = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (x);
}
