#include "main.h"
#include <string.h>
/**
 * reverse_array - function that return array  reverse
 * @a: parameter
 * @n: parameter
 *Return: 0
 *
 */
void reverse_array(int *a, int n)
{
	int i;

	a  = &a[0];

	for (i = 0; i < n; i++)
	a++;
	a = &a[n - 1];

	for (i = n - 1; i > 0; i--)
	a--;
}
