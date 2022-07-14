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

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
		return (dest);

}
