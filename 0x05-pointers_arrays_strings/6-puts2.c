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
	int s;

	for (int i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);

		s[i / 2] = str[i];
	}
	_putchar(s);
	_putchar('\n');
	return (0);
}
