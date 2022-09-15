#include "main.h"
/**
 * print_alphabet_x10 - write a to z
 * Description: programe to print a to z
 * print_alphabet: write
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
char words[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(words[i]10);
}
_putchar('\n');
}
