#include <stdio.h>
/**
  *main - prints the lowercase alphabet in reverse
  *return always 0
  */
int main(void)
{
	char alphabet;

		for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
			putchar(alphabet);

	putchar('\n');
	return (0);
}
