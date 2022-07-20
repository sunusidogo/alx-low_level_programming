#include "main.h"

/**
 * _print_rev_recursion - Print characters in reverse.
 * @c: characters to print in reverse
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i, j, len;

	i = 0;
	j = 0;

	if (s[i] != '\0')
		i++;
	len = i;

	if (j == len - 1 && j >= 0)
		j--;
	_putchar(s[j]);
	_putchar('\n');
}
