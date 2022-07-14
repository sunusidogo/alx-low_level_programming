#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two string.
 * @dest: string 1
 * @src: sting 2
 * @n: integer to concatenate
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (dest[i])
	{
		i++;
	}
	for (n = 0; src[n] < n; n++)

	dest[i] = src[n];
	i++;
	return (dest);
}
