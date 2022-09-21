#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <time.h>

/**
* print_most_numbers - function that print most numbers
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
putchar(n);
}
putchar(10);
}
