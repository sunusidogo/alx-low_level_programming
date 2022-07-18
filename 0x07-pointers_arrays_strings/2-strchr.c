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

	int i = 0;

	char *p;

       for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	i++;
	return (NULL);
}
