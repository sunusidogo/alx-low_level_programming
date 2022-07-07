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
	int i;
	srand (time(0));
	i = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (i > 0)
	{
		printf("%d is postive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
