#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 *
 * @s: Character that carries the string
 *
 *
 * Return: Always 0
 *
 */

 void _puts_recursion(char *s)
 {
     if (s[0] == '\0')
     {
         putchar('\n');
         return;
     }
     putchar(s[0]);
     _puts_recursion(s + 1);
 }

