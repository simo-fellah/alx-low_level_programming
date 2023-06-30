#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int e;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
	dest[c] = src[e];
	c++;
	e++;
	}
	dest[c] = '\0';
	return (dest);
}
