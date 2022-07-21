#include "main.h"

/**
 * _puts_recursion - function to write a string.
 * @s: the character to write
 *
 * Return: 0
 */
void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
