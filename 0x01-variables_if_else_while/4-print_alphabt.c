#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: returns 0 as success
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
			putchar(i);
	}
	putchar('\n');
	return (0);

}
