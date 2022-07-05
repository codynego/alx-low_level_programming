#include "main.h"

/**
 * main - a function that prints _putchar
 *
 * Return: return 0 as success
 *
 */

int main(void)
{
	char character[] = "_putchar";
	int i;
	int lenght;

	lenght = sizeof(character) / sizeof(character[0]);

	for (i = 0; i < lenght; i++)
	{
		_putchar(character[i]);

	}
		_putchar('\n');

		return (0);


}
