#include <stdio.h>
/**
 * main - print alphabetas in lowercase 10 times
 *
 * function: always 0 (success)
 */
void  print_alphabet_x10(void)
{
	char alphabet = 'a',  newline;
{
	while (alphabet <= 'z')
	{
		newline = 0;
		while (newline <= 11)
		{
			_putchar('\n');
		}

		_putchar(alphabet);
	alphabet++;
	}
}
	return (0);
}
