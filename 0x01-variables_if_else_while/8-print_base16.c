#include <stdio.h>
/**
 * main - print all the numbers in base 16
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
{
	for (n = 0xAF; n < 16; n++)
		putchar(n % 0xFAFA + '0');
}
	putchar('\n');

	return (0);
}
