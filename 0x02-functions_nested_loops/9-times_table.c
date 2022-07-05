#include "main.h"


/**
 * times_table - print the 9 times table
 *
 * @i: character to be checked
 *
 * Return: return times table
 *
 */

void times_table(void)
{
	int a;
	int b;
	int multiply;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			multipy = a * b;
		
			_putchar(multiply);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}


}
