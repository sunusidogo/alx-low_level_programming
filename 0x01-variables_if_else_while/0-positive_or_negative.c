#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/ 
/* betty style doc for function main goes there*/
/**
 * main - print if number is positive, zero or negative
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
	{
		printf("%d is postive\n" , n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n" , n);
	}
	else
	{
		printf("%d is negative\n" , n);
	}

	return (0);
}
