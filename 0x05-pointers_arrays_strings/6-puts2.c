#include "main.h"
#include <string.h>
/**
 * puts2 - program to print every other character in string
 * @str: string to print
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
