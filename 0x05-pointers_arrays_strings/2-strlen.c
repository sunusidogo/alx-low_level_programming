#includ "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: string to pring
 *
 * Return: 0
 */ 
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	_putchar(i);
	return 0;
	
}
