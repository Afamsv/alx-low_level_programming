#include "main.h"

/**
* times_table - times table function
*/

void times_table(void)
{
	int i;
	int j;

	int prod = j * i;

	for (i = 0; i <= 9; i++)
	{

		if (j == 0)
		{
			_putchar('0');
		}
		else if (prod <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(prod + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
		}
		_putchar('\n');
	}
}
