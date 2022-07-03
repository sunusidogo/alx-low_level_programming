#include <stdio.h>
/**
 * main - print all the single digit numbers in base 10
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
{
	putchar(n);
	n++;
}
	putchar('\n');

	return (0);
}
