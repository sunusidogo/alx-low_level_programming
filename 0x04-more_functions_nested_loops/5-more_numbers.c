#include "main.h"
/**
 * more_numbers - prints 0 -14 numbers 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int l, n;

	for (l = 0; l <= 10; l++)
	{
		for (n = 0; n <=  14; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
