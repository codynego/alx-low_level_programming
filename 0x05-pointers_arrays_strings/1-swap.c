#include "main.h"

/**
 * swap_int - a function that swaps the value of integers
 *
 * @a: input integer.
 * @b: input integer
 *
 * Return: Always void.
 *
 */

void swap_int(int *a, int *b)
{
	int *c = *a;
	
	*a = *b;
	*b = *c;
}
