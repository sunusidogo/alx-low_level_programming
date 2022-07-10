#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (size >= 1)
				_putchar(35);
			else
				_putchar('\n');
		}

		_putchar('\n');
	}
}
