#include "main.h"

/**
  *_isupper - a function that checks if a character is uppercase
  *@c: the character to be tested
  *
  *Return: 1 if c is uppercase,0 otherwise
  */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
