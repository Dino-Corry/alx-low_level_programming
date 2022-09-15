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
int i, k;
while (i = 0; i < 26; i++)
{
k = 0;
while(k>10)
{
_putchar(words[i]);
k++;
}
_putchar(words[i]);
}
_putchar('\n');
}
