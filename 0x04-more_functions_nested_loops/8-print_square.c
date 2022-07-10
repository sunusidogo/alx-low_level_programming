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

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

}
