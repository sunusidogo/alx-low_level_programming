#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/* Betty style for function  goes there*/
/**
 * main - print if number is postive, zero or negative
 * Return: always 0
 */
int positive_or_negative(void)
{
	int n;
	srand (time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
