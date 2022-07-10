#include "main.h"
/**
 * more_numbers - prints 0 -14 numbers 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int l, n;

	for (l = 0; l <= 10;)
	_putchar(l);
	l++;
	for (n = 48; n <=  57; n++)
	_putchar(n);
	_putchar('\n');
}
