#include "main.h"
/**
 * main - prints alphabet in lowercase
 *
 * Return: alphabet
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);
	_putchar('\n');
}
