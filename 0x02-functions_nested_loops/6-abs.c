#include "main.h"

/**
 * _abs - computes the absolute value of an int n.
 *
 *
 * Return: 0
 */
int _abs(int n)
{

	n = 0;
	if (n < 0)
	n = n * (-1);
	_putchar(n);
	return (0);
}
