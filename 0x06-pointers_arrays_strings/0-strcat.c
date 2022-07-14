#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source of appending
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}

	return (dest);
}
