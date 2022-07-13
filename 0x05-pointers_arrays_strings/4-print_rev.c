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
	if (*s)
		print_rev(s + 1);
	_putchar(*s);


}
