#include "main.h"

/**
 *  _isupper - program checks for uppercase character.
 * @c: integer n
 *
 * Return: 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	_putchar(1);

	else
	{
	_putchar(0);
	_putchar('\n');
	}
	return (0);
}
