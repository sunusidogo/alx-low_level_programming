#include "main.h"
/**
 * main - function that checks for alphabetic character
 * @c: print 1 if true 0 if false
 *
 * Return: always 0 (success)
 *
 * Description: on error retun -1, no error return 1 or 0
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

