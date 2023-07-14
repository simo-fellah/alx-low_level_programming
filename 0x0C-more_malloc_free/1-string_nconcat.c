#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, le1 = 0, le2 = 0;

	while (s1 && s1[le1])
		le1++;
	while (s2 && s2[le2])
		le2++;

	if (n < le2)
		s = malloc(sizeof(char) * (le1 + n + 1));
	else
		s = malloc(sizeof(char) * (le1 + le2 + 1));

	if (!s)
		return (NULL);

	while (i < le1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < le2 && i < (le1 + n))
		s[i++] = s2[j++];

	while (n >= le2 && i < (le1 + le2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
