#include "main.h"

/**
  *swap_int -  a function that swaps the values of two integers
  *@a: the first interger
  *@b: the second interger
  *
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

