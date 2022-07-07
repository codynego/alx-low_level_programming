#include "main.h"

/**
 * print_line - print '_' n times
 *
 * @n: charater to be checked
 *
 * Return: return 0 as success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
			_putchar('\n');

}


