#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int e = 0;
	int b = 0;

	while (*(src + e) != '\0')
	{
		e++;
	}
	for ( ; b < e ; b++)
	{
		dest[b] = src[b];
	}
	dest[evi] = '\0';
	return (dest);
}

