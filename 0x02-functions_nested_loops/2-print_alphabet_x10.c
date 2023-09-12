#include "main.h"
/**
  *printing out alphabets
  *print alphabets 10 times in lower case
  *by using _putchar function
  *in a new line
  * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
	}
}
