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
	int b;


	for (n = 48; n < 56; n++)
	{
		for (t = 49; t < 57; t++)
		{
			for (b = 50; b < 58; b++)
			{
				putchar(n);
				putchar(t);
				putchar(b);

				if ((n == 55) && (t == 56) && (b == 57))
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
