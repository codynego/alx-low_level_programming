#include "main.h"

/**
 * _puts - a function that prints a string in reverse
 *
 * @s: input integer
 *
 * Return: Always void
 *
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		count++;
	}
		
	for (i = count; i == 0; i--)
	{
		_putchar(*(s + count));
	}

	_putchar('\n');
}
