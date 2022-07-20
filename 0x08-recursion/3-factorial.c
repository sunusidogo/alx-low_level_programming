#include "main.h"

/**
 * factorial - function that print the factorial of a number
 * @n: the integer or argument
 *
 * Return: factorial
 */
int factorial(int n)
{

	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial (n - 1));
}
