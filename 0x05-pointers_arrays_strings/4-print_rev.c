#include "main.h"
#include <string.h>

/**
 * print_rev - printing string in reverse
 *@s: the string that is to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int l, i;

	i = strlen(s);
	for (l = i - 1; l >= 0;  l++)
	{
		_putchar(s[l]);
	}	
		_putchar('\n');
}
