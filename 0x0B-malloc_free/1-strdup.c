#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *s;
unsigned int i, j;

if (s == NULL)
	return (NULL);

		for (i = 0; s[i] != '\0'; i++)
			s = (char *)malloc(sizeof(char) * (i +1));

if (s == NULL)
	return (NULL);

for (j = 0; j <= i; j++)
	s[j] = s[i];
return (s);

}
