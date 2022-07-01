#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: return 0 as success
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
