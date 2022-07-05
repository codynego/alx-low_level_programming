#include <stdio.h>

/**
 * main - prints alphabet in the reverse form
 *
 * Return: returns 0 as success
 *
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);

	}
	putchar('\n');
	return (0);

}
