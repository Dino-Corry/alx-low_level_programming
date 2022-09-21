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

a = 98;
b = 42;
printf("a=%p, b=%p\n", a, b);

a = &b;
b = &a;
printf("a=%p, b=%p\n", a, b);
return (0);
}
