#include "main.h"
/**
  *printing out alphabets
  *print alphabets 10 times in lower case
  *by using _putchar function
  *in a new line
  *
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	}
	_putchar('\n');
}
