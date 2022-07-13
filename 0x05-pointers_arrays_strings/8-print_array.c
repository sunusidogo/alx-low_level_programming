#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the value of the array
 * @n: number of array
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int p;
	int i;

	a  = &p;

	for (i = 0; i < n; i++)
	{
		_putchar(*a + i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
