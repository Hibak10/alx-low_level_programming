#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar((-n % 10) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
