#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: string to evaluate
 * Return: return the length
 */

int _strlen(char *s)
{
int c;

c = 0;

while (s[c] != '\0')
{
c++;
}
return (c);
}
