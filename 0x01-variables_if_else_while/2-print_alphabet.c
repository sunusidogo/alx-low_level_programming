#include <stdio.h>
/**
 * main - prints the alphabets in lowercase, and then UPPERCASE
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
