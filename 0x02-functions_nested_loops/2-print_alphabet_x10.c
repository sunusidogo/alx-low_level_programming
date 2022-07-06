#include "main.h"
/**
 * main - print alphabetas in lowercase 10 times
 * @c: print alphabet
 *
 * Return: nothing
 */
void  print_alphabet_x10(void)
{
	char newline = 0,  alphabet;
{
	while (newline <= 10)
	{
		alphabet = 0;
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
	newline++;
	}
}
}
