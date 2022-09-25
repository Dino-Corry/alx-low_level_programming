#include "main.h"
#include <stdio.h>

/**
 * rev_string - string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
int l = strlen(s), m = l / 2;
char temp;
for (int i = 0; i < m; i++)
{
temp = s[i];
s[i] = s[i - i - 1];
s[l - i - 1] = temp;
}
}
