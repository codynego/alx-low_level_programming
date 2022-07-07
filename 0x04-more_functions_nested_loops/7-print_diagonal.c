#include "main.h"

/**
 * print_diagonal - print '\' n times
 *
 * @n: charater to be checked
 *
 * Return: return 0 as success
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(92);
		}
	}
			_putchar('\n');

}


