#include "main.h"
 /* 
 * main - entry point
 *
 * Description: _putchar programe
 *
 * Return: always 0
 */
int main(void)
{
char words[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(words[i]);
}

_putchar('\n');

return (0);
}
