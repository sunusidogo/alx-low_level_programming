#include <stdio.h>
/**
 * main - program to prints all possible combination of single digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, y;
	{
		for (n = 0; n <= 8; n++)
	{
		for (y = n + 1; y <= 9; y++)

		putchar((n / 10) + '0');
		putchar((y / 10) + '0');

		if (n == 8 && y == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
		return (0);
}
