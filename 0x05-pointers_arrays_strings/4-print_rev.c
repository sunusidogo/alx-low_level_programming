#include "main.h"
#include <string.h>

/**
 * print_rev - printing string in reverse
 *@s: the string that is to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{	int len, i;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	_putchar(*(s + i));
}
