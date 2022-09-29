
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string, followed by a new line.
 *
 * @s: Character that carries the string
 *
 *
 * Return: Always 0
 *
 */

void _print_rev_recursion(char *s)
 {
     if (s[0] == '\0')
     {
         printf('\n');
         return;
     }
     printf(s[0]);
     _print_rev_recursion(s - 1);
 }

