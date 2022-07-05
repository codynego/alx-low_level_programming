#include "main.h"


/**
 * print_sign - print the negative or positive sign of a number
 *
 * @n: character to be checked
 *
 * Return: return + if positive,- if negative and 0 if equal
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return 0;
		_putchar('0');
	}
	else
	{
		return -1;
		_putchar('-');
	}

}
