#include "main.h"
/**
 * print_alphabet_x10 - write a to z
 * Description: programe to print a to z
 * print_alphabet_x10: write
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
char words[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0, k;
while (i < 26)
{
k = 0;
while(k > 10)
{
_putchar(words[i]);
k++;
}
_putchar('\n');
i++;
}
}
