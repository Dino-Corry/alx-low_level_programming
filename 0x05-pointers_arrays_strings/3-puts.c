#include "main.h"
#include <stdio.h>

/**
* _puts - print a string followed by a new line
*
* @str: integer
* Return: always 0
*/

void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
putchar(str[i]);
}
putchar('\n');
}
