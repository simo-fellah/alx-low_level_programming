#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int coun = 0;
	int i;

	while (s[coun] != '\0')
	coun++;
	for (i = 0; i < coun; i++)
	{
		coun--;
		reverse = s[i];
		s[i] = s[coun];
		s[coun] = reverse;
	}
}
