#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, l, j, le, n, temp;

	k = 0;
	l = 0;
	j = 0;
	le = 0;
	n = 0;
	temp = 0;

	while (s[le] != '\0')
		le++;

	while (k < le && n == 0)
	{
		if (s[k] == '-')
			++l;

		if (s[k] >= '0' && s[k] <= '9')
		{
			temp = s[k] - '0';
			if (l % 2)
				temp = -temp;
			j = j * 10 + temp;
			n = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			n = 0;
		}
		k++;
	}

	if (n == 0)
		return (0);

	return (j);
}

