#include "main.h"

/**
 * print_square - print square shape using # character.
 * @size: is the size of the squre
 *
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size > 0)
			_putchar(35);

			else

			_putchar('\n');
		}
		_putchar('\n');
	}

}
