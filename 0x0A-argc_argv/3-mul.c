#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Main - prints the multiplication of two integers
 * @argc: int type
 * @argv: char type
 * Return: 0 if true 1 if false
 **/
int main(int argc, char *argv[])
{
int x = 0, y = 0;
if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);

printf("%d\n", x *y);
}

else

{
printf("Error\n");
return (1);
}
return (0);
}
