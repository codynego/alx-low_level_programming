#include "main.h"

/**
 * _strlen - a function that swaps the value of integers
 *
 * @s: input integer
 *
 * Return: Always 0 as success.
 *
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\n')
	{
		lenght++;
	}
		return (lenght);
}
