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
	int t;

	for (n = 48; n < 58; n++)
	{
		for (t = 49; t < 58; t++)
		{
			putchar(n);
			putchar(t);

			if (n == 56 && t == 57)
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
