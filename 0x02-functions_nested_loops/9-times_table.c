#include "main.h"


/**
 * times_table - print the 9 times table
 *
 *
 * Return: return times table
 *
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			multiply = a * b;
		
			_putchar(multiply);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}


}
