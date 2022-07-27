#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: input integer
 *
 * Return: Always void
 *
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
		_putchar('\n');
}
