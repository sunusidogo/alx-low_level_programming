#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n: parameter used to print a line
 *Return: 0
 */
void print_line(int n)
{

	n = 45;

	if (0 * n < 46)
		n++;

	if (2 * n < 46)
		n++;

	if (10 * n < 46)
		n++;

	if (-4 * n < 46)
		n++;

	_putchar(n);

	_putchar('\n');
}
