#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet in lower case
 *
 * Return: return void
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = 48; i < 57; i++)
	{
		for (i = 97; i < 122; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
	}
}
