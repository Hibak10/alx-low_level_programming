#include "main.h"
/**
  *main - prints the alphabet in lowercase, followed by a new line.
  * You can only use _putchar twice in your code
  *author:hibak
  */
void print_alphabet(void)
{
	int alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
}
