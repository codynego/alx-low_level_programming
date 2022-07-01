#include <stdio.h>

/**
 * main - prints alphabet in the reverse form
 *
 * Return: returns 0 as success
 *
 */

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i <= 0; i--)
	{
		putchar(alphabets[i]);

	}
	putchar('\n');
	return (0);

}
