#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the value of the array
 * @n: number of array
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	*a  = n;

	for (i = 0; i < 5; i++)
	{
		_putchar(*a);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
