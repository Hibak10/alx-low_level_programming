#include "main.h"

/**
  *_isdigit - function that checks for digit 0 through 9
  *@c: the number to be checked
  *return:  returns 1 if the number is  digit, 0 otherwise
  *
  */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}


