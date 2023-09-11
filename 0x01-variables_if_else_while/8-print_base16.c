#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all the numbers of base 16 in lowercase
  * only use the putchar function
  *use putchar three times in the code
  *return: (0)
  */
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
