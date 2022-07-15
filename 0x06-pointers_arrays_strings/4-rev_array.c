#include "main.h"
#include <string.h>
/**
 * reverse_array - function that return array  reverse
 * @a: parameter
 * @n: parameter
 *
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;								}
}
