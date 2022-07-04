#include <stdio.h>
/**
 * main - program to prints all possible combination of single digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	{
		for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
		return (0);
}
