#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, j, r;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (r = 0; r < 10; r++)
		{
			if (r < j)
				printf("%02x", *(b + a + r));
			else
				printf("  ");
			if (r % 2)
			{
				printf(" ");
			}
		}
		for (r = 0; r < j; r++)
		{
			int c = *(b + a + r);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
