#include "main.h"

/**
 * print_alphabet - prints lower case alphabet x10 
 *
 * Return: return 0 as success
 */

void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}
}
