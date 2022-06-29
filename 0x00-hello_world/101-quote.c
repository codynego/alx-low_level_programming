#include <unistd.h>

/**
 * main - entry point of the program
 *
 * Return: returns 1 as succes
 *
 * Description: prints out text using write function
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);

}
