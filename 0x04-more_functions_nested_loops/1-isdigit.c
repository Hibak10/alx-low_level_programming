#include "main.h"

/**
  *_isdigit -  a function that can be used to check if the
  *passed character is a digit or not
  *@c: the character to be tested
  *return:  returns 1 if c is a digit, 0 otherwise
  *
  */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}


