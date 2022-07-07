#include "main.h"

/**
 * print_square - print '#' n times
 *
 * @size: charater to be checked
 *
 * Return: return 0 as success
 */

void print_square(int size)
{
	int i;
	int b = 0;

	do
	{

		for (i = 0; i <= size; i++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');

			}
	
				_putchar('\n');
		}

			b++;
			putchar('\n');
	}
	while (b < size);
}



