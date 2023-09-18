#include <stdio.h>
#include "main.h"

/**
  *print_triangle - print a triangle using the '#' character
  *@size:size  to be printed
  *_putchar function to use to print the triangle
  *
  *
  *
  */

void print_triangle(int size)
{
	/* local variable definition */

	int j;
	int i = 1 

	if (i <= size)

		_putchar('\n');
	for (i = 1; i <= size; i++)

		for (j = 1; j <= i; j++)

			_putchar('#');

	_putchar('\n');
}

