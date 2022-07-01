#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digit
 *
 * Return: returns 0 as success
 *
 */

int main(void)
{
	int n;
	int p;

	for (n = 48; n < 58; n++)
	{
		for (p = 49; p < 58; p++)
		{
			putchar(n);
			putchar(p);

			if (n == 56 && p == 57)
			{
				break;
			}
			else
				putchar(',');
				putchar(' ');
		}
	}
	putchar(',');
	return (0);
}
