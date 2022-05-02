#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *strcp;
unsigned int i, j;

if (str == NULL)
	return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			strcp = malloc(sizeof(char) * i);

if (strcp == NULL)
	return (NULL);

for (j = 0; j <= i; j++)
	strcp[j] = str[j];

return (strcp);

}
