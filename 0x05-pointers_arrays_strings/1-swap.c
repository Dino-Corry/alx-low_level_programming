#include <stdio.h>
#include "main.h"

/**
 * swap_int - printing the size, in bytes, of a pointer
 *
 * @*a: variable
 * @*b: variable
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
a = &b;
b = &a;
printf("a=%d, b=%d\n", a, b);
return (0);
}
