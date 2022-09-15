#include "main.h"
/**
 * main - entry point
 *
 * Description: Program description
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
return (0);
}
