#include "main.h"

/**
 *print_alphabet_x10 - prints lower case alphabet x1
 *
 * Return: return 0 as success
 */

void print_alphabet_x10(void)
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
