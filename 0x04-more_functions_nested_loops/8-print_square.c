#include "main.h"

/**
 * print_square - print square shape using # character.
 * @n: is the size of the squre
 *
 * Return: 0
 */
void print_square(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
