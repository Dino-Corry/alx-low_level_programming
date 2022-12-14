#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: received string
 */
void puts_half(char *str)
{
	int i = 0, length = 0, n;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	for (i = n; i < length; i++)
		putchar(str[i]);
	putchar('\n');
}
