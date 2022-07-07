#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9
 *
 *
 * Return: return 0 as success
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
	}

		_putchar('\n');

}


