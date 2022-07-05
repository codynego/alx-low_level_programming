#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet in lower case
 *
 * Return: return void
 */

void print_alphabet_x10(void)
{
	int i,j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
			
		_putchar('\n');
	}
}
