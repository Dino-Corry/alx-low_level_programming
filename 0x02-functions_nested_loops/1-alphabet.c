#include "main.h"
/**
 * Print_alphabet - standout output
 * Description - programe to print a to z
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char words[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(words[i]);
}
_putchar('\n');
}
