#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i, b;
b = i-1;
for (i = 0; i<b; i++)
{
print_rev(s + 1);
}
printf("%c", *s);
}
