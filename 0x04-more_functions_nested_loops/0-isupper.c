#include "main.h"

/**
 * _isupper - check is a number is upper case or not
 * @c: charater to be checked
 *
 * Return: return 0 as success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


