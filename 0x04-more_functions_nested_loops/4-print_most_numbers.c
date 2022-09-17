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
  int x;
  for (x = 48, x <= 57, x++)
  {
    if (x == 50 || x == 52)
    {
      _putchar(x++);
    }
    putchar (10);
   }
}
