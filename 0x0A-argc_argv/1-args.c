#include "main.h"
#include <stdio.h>

/** Main: main
 * @argc: int type
 * @argv: char type
 * Return: prints the number of arguments passed into it
 **/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
 
