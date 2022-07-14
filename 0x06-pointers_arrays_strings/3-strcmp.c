#include "main.h"
#include <string.h>

/**
 * _strcmp -  function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 on succes
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1 != '\0' && *s2 !='\0')
	{
		if (*s1 != *s2)
		{
			flag = 1;
		}
		s1++;
		s2++;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}
