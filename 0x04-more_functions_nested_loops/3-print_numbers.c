#include "main.h"

/**
 * print_numbers - print numbers from from 0 - 9 using _putchar.
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57;) 
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');

	return;
}
