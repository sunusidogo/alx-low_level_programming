#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to be searched
 * @c: character to find
 *
 * Return: (0) on success
 */
char *_strchr(char *s, char c)
{

	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
