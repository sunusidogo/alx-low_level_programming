#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to print
 *
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int part_size = *str / 2;

	for (i = 0; i < *str; i++)

	if (i % part_size == 0)
	_putchar(str[i]);

	_putchar('\n');
}
