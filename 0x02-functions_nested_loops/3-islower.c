#include "main.h"
/**
 * main - function that checks for lowercase character.
 *
 * Return: 0
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
	_putchar(1);
	}
	else
	{
	_putchar(0);
	}
	_putchar('\n');

	return (0);
}
