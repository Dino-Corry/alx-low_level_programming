#include <stdio.h>
#include "main.h"

/**
 * _puts - return the length of string
 *
 * @str: string to evaluate
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
