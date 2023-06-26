#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int o, sm, n;

	sm = 0;	

	srand(time(NULL));

	for (o = 0; o < 100; o++)
	{
		pass[o] = rand() % 78;
		sm += (pass[o] + '0');
		putchar(pass[o] + '0');
		if ((2772 - sm) - '0' < 78)
		{
			n = 2772 - sm - '0';
			sm += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
