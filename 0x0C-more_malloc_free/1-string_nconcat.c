#include "main.h"

/**
 *string_nconcat - asd
 *@s1: asd
 *@s2: asd
 *@n: asd
 *Return: asd
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_array;
	unsigned int i, length;
  i = 0;
  length = n;

	if (s1 == NULL)
		s1 = "\n";

	if (s2 == NULL)
		s2 = "\n";

	while (s1[i++] != '\0')
		length++;

	new_array = malloc(sizeof(char) * (length + 1));

	if (new_array == NULL)
		return (NULL);


	length = 0;

	for (i = 0; s1[i]; i++)
		new_array[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new_array[length++] = s2[i];

	new_array[length] = '\0';

	return (new_array);
}
