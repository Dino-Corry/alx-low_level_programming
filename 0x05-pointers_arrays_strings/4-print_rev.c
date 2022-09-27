#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i = 0, n, a;
while (s[i])
{
i++;
}
a = i;
for (n = a - 1; n >= 0; n--)
{
printf("%c", s[n]);
}
printf("\n");
}
