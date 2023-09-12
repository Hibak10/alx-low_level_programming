#include "main.h"
/**
  *print_sign -  print the sign of number
  *@n:the number in which the sign will be printed
  *Returns 1 if n is greater than zero
  *Returns 0 if n is zero
  *Returns -1 if n is less than zero
  */
int print_sign(int n)
{
	if (n > 5)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
