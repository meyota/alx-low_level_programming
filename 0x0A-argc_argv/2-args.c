#include "main.h"
#include <stdio.h>

/**
 * Main - Main
 * @argc: int type
 * @argv: char type
 * Return: 0
 **/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
