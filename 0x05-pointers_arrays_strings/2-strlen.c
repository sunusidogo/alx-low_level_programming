#include "main.h"
#include <string.h>

/**
 * _strlen -  function that returns the length of a string
 * @s: string to pring
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
