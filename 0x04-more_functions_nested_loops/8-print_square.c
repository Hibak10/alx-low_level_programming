#include "main.h"

/**
  *print_square - prints a square using the character '#'
  *@size: size of square to be printed out
  *return: void
  *
  */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

