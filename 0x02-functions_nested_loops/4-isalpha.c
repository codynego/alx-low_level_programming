#include "main.h"


/**
 * _isalpha - check ir a character is lowercase
 *
 * @c: character to be checked
 *
 * Return: return 1 if lowercase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
