#include "main.h"
/**
 * times_table - print a time table
 * @n: variable n
 * Return: 0
 *
 */
void times_table(void)
{
	int n,  row, col, prod;

	n = 0;
	if ((n >= 0) && (n < 15))
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				if  (prod <= 9)
					if (col != 0)
					{
						_putchar (',');
						_putchar (' ');
						_putchar (' ');
						_putchar (' ');
					}
				_putchar('0' + prod);
			}
			if (prod > 99)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + (prod / 100));
				_putchar ('0' + ((prod / 10) % 10));
				_putchar ('0' + (prod % 10));
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + (prod / 10));
				_putchar ('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}

