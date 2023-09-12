#include "main.h"
/**
  * print_last_digit - to print last digit of number
  *@num: the number to be printed out
  *print_last_digit - to print the last_digit of num
  *Return: Value of the last digit
  *
  */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
