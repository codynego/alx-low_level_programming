#include "main.h"

/**
 * _strlen - a function that swaps the value of integers
 *
 * @s: input integer
 *
 * Return: Always lenght
 *
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
	{
		lenght++;
	}
	return (lenght);
}
