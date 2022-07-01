#include <stdio.h>

/**
 * main - program that prints all combinations of single-digit numbers
 *
 * Return: returns 0 as success
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	

	}
	return (0);

}
