#include "main.h"

/**
 * swap_int - proghram to swap value between intergers
 * @a: parameter swap
 * @b: parameter to swap with
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
