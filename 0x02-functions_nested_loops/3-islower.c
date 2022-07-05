#include "main.h"


/**
 * _islower - check ir a character is lowercase
 *
 * @c: character to be checked
 *
 * Return: return 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
