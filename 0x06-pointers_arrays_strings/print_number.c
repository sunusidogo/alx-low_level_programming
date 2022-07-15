#include <unistd.h>

/**
 * print_number - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_number(int n)

{

	return (write(1, &c, 1));

}
