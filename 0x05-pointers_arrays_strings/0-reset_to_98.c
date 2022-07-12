#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int and updates its value to 98
 * @n: a ponter to p.
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	int p;

	*n = &p;
	p = 402;

	printf("value of 'p': %d\n", p);
	printf("address of 'p': %p\n", &p);
	printf("value of 'n': %p\n", n);
	printf("address of 'p': %p\n", &n);
	printf("value of 'p': %d\n", p);
	return (0);

}
