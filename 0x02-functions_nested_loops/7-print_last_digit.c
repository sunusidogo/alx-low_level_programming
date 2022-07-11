#include "main.h"
/**
 * print_last_digit - program to print the last digit of a number
 * @l: last digit of a number
 * Return: 0
 */
int print_last_digit(int l)
{
	int n;

	for (n = 0; n <= 100;)
	{
		if (l == n % 10)
		return (l);
	}
	_putchar('\n');
	
	return (0);
}
