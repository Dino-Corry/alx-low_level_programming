#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void rev_string(char *s)
{
int l, i;

char *begin_ptr, *end_ptr, ch;

// Get the length of the string

l = strlen(s);

// Set the begin_ptr and end_ptr

// initially to start of string

begin_ptr = s;

end_ptr = s;

// Move the end_ptr to the last character

for (i = 0; i < l - 1; i++)

end_ptr++;

// Swap the char from start and end

// index using begin_ptr and end_ptr

for (i = 0; i < l / 2; i++) {

// swap character

ch = *end_ptr;

*end_ptr = *begin_ptr;

*begin_ptr = ch;

// update pointers positions

begin_ptr++;

end_ptr--;

}

}
