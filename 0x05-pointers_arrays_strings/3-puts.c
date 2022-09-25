#include "main.h"
#include <stdio.h>

/**
* _strlen - return the length of string
*
* @s: integer
* Return: always 0
*/

void _puts(char *str)
{
int i = 0;
for (i; str[i]; i++)
{
putchar(str[i]);
}
putchar('\n');
}
