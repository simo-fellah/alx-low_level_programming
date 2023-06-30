#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, e;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (e = 0; e < 10; e++)
		{
			if (n[i] == s1[e])
			{
				n[i] = s2[e];
			}
		}
	}
	return (n);
}
