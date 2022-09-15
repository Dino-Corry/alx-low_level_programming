#include "main.h"
/**
 * print_alphabet - write a to z
 * Description: programe to print a to z
 * print_alphabet: write
 *
 * return: 0
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
