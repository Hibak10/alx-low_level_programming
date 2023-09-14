#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		if ((digit == 50) || (digit == 52))
		{
			continue;
		}
	}
	_putchar(digit);
	_putchar('\n');
}



