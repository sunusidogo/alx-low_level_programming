#include <stdio.h>
/**
 * main - prints all alphabets in lowercase except q and e
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char alphabet;
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet == 'e' || alphabet == 'q')
	continue;
	else
	putchar(alphabet);
	}
	putchar('\n');
}
	return (0);
}
