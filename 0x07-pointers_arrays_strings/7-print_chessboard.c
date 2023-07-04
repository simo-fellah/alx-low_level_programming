#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int z;
	int e;

	for (z = 0; z < 8; z++)
	{
		for (e = 0; e < 8; e++)
			_putchar(a[z][e]);
		_putchar('\n');
	}
}
