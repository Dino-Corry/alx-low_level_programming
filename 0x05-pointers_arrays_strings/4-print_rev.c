#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
print_rev(s + 1);
printf("%c", *s);
return (0);
}
