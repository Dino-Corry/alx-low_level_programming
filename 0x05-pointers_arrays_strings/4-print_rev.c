#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i;
for (i = *s-1; i >= 0; i--)
{
printf("%c", s[i]);
}
return (0);
}
