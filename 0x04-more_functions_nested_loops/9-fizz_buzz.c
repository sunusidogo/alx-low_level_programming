#include <stdio.h>
/**
 * fizz_buzz - program that prints numbers to 100.
 * if a number is multiple of 3 print fizz
 * it it is multiple of print buzz
 * if it is a multiple of both print fizzbuzz
 * @i: integer used to print the numbers
 *
 * Return: 0
 */
int fizz_buzz(int i)
{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	putchar(' ');
	putchar('\n');

	return (0);
}
