#include <stdio.h>
/**
  *main - main block
  *Description:  print the lowercase alphabet in reverse
  *use the putchar function
  *only use putchar twice
  */
int main(void)
{
	char alphabet

		for (alphabet = 'z'; alphabet <= 'a'; alphabet++)
			putchar(alphabet);

	putchar('\n');
	return (0);
}
