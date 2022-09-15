#include "main.h"
/**
 * main - standout output
 * Description: programe to print a to z
 *
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
