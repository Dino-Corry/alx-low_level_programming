#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
print_reverse(s + 1);
printf("%c\n" *s);
return (0);
}
