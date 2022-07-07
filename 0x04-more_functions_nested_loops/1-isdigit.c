#include "main.h"

/**
 * _isdigit - check is a number is upper case or not
 * @c: charater to be checked
 *
 * Return: return 0 as success
 */

int _isdigit(int c);
{
	if (c >= 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


