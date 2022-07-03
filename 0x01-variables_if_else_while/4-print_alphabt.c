#include <stdio.h>
/**
 * main - prints all alphabets in lowercase except q and e
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char alphabet;
	(alphabet = 'a');
	{
	while (alphabet <= 'z')

	if (alphabet == 'e' || alphabet == 'q')
	{
		alphabet++;
		continue;
	}
		putchar(alphabet);
	putchar('\n');
	}
	return (0);
}
