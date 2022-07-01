#include <stdio.h>

/**
 * main - prints out all single digit of base 10
 *
 * Return: returns 0 as success
 *
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
