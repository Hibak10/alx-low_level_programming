#include "main.h"
/**
  *print_sign - Print the sign of number
  *@n: The chatacter to be printed
  *Return: 1 if number is greater than 0,0 if number is 0,
  * -1 if number is less than 0.
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
