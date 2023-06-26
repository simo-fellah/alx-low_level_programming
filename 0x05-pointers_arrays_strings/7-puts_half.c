#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int e, n, l;

	l = 0;

	for (e = 0; str[e] != '\0'; e++)
		l++;

	n = (l / 2);

	if ((l % 2) == 1)
		n = ((l + 1) / 2);

	for (e = n; str[e] != '\0'; e++)
		_putchar(str[e]);
	_putchar('\n');
}
