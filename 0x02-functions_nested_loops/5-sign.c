#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: integer
 * Return: 0 on success
 */
int print_sign(int n)
{
	int n;
	int n = 0;

	if (n > 1)
{
	return (1);
	_putchar('+');
}
	else if (n == 0)
{
	return (0);
	_putchar(0);
}
	else
{
	return (-1);
	_putchar('-');
}
	_putchar('\n');
}
