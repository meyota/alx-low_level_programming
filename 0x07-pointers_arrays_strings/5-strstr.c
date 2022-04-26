#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: buffer
 * @needle: buffer2
 *
 * Return: null.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
int i = 0;

while (*(haystack + i) != '\0')
	{
k = i;
j = 0;
while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0'
&& *(haystack + i) != '\0')
{
i++;
j++;
}
if (*(needle + j) == '\0')
{
return (haystack + k);
}
i = k + 1;
}
return (0);
}
