#include <stdio.h>
#include <stdlib.h>
/**
  *main to print alphabets in lower case
  *description: print alphabets in lower case a-z
  *return always (0)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
