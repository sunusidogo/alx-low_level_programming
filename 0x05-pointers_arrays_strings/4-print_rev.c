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
	int  c = 0;
	while (*(s + c) != '\0')
		c++;
	_putchar(c);

	_putchar('\n');
}	
