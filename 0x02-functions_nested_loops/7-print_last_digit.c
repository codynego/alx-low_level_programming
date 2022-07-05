#include "main.h"


/**
 * print_last_digit - print the absolute value of number
 *
 * @i: character to be checked
 *
 * Return: return the absolute value
 *
 */

int print_last_digit(int i)
{
	int n  = i % 10;
	int result;

	if (i < 0)
	{
		result = -1 * n;
	}
	else
	{
		result = n;
	}
	_putchar('0' + result);
	return (result);


}
