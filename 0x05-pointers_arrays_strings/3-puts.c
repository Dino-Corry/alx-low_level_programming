#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: string to evaluate
 * Return: return the length
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
